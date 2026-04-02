/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATBatchParameters
//     
//
//=============================================================================
// Usage Notes:
//

//=============================================================================
//	December 2001   Creation                                jnm
//=============================================================================
#ifndef CATBatchParameters_H
#define CATBatchParameters_H 
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */



#include "CATBatchUtils.h"
#include "CATErrorDef.h"
#include "CATBatchPublicDefinitions.h"
#include "CATUnicodeString.h"

#include <string.h>



//------------------------------------------------------------------

/**
 * Class generating the batch parameter XML file.
 * <b>Role</b>: This class allow you to generate the XML parameters file.
 * It can be used in the UI of your batch when overloading the method CATBatchFrame::FillParametersFile
 * One object represents one parameter file.
 * Each method write in the file. To obtain a consistent XML file you must call the methods in the following order : 
 * <ul>
 * <li> BeginInput </li>
 * <li> EndInput </li>
 * <li> BeginOutput </li>
 * <li> EndOutput </li>
 * </ul>
 * In the Input or Output section  ou can use the Insertxxx methods to describe the I/O of your batch.
 *
 *   @see CATIBatchCAA, CATIBatchElementsCAA, CATBatchParameters, CATBatchFrame (for CATUTIL integration only)
 */
class ExportedByCATBatchUtils CATBatchParameters 
{
  public :

	CATBatchParameters();
   ~CATBatchParameters();

/**
 * Initialize the XML input parameter file and generate the root tag
 * <br><b>Role</b>: This method allows you to initialize an XML parameter file.
 *
 * @batch_name
 * name of the batch descriptor file, this input parameter file refers to.  
 * @file_name
 * name of the file to be generated (without the path), e.g param.xml
  * @user
 * user name of the launcher of the batch. The batch can be launched as a given user. If null, the batch will be launched as the current user of the launcher process.
 * @pwd 
 * password associated to the above user. Will be crypted if you implement the user exit CATIUExitCrypt.
 * @env
 * name of the environment (created with setcatenv) to use for the batch process. If null, the launcher environment will be inherited by the batch.
 * @dir 
 * directory name where to save the XML parameter file
 * @licfile
 * full path of a file containing the licensing information for this batch. Each line of this file must be formatted as follows :
 * batch_name|product.slt , where product.slt is the name of the config/product used by the licensing when running the batch.
 * if licfile=NULL, licensing informations will be searched in the XML param file, if not found to license will be taken for the batch.

 */
   HRESULT BeginBuffer(const char* batch_name, const char* file_name, const char* user=NULL, const char* pwd=NULL , const char* env=NULL, const char* dir=NULL,  const char* licfile=NULL);

 /** 
 * Closes the XML input parameter file
 * <br><b>Role</b>: This method close the XML input parameter file.
 *
 */
   HRESULT EndBuffer();
   

 /** 
 * Opens a Input section.
 * <br><b>Role</b>: This method open the input section of your XML parameter file where you can describe 
 * the inputs of your batch.
 * Do no forget to call EndInput to close the section.
 *
 */
 
   HRESULT BeginInput();
 /** 
 * Closes a Input section.
 * <br><b>Role</b>: This method close the input section of your XML parameter file if it has been previously opened.
 *
 *
 */
   HRESULT EndInput();
/** 
 * Opens a Output section.
 * <br><b>Role</b>: This method open the output section of your XML parameter file where you can describe 
 * the outputs of your batch.
 * Do no forget to call EndOutput to close the section.
 *
 */
 
   HRESULT BeginOutput();
/** 
 * Closes a Ouput section.
 * <br><b>Role</b>: This method close the output section of your XML parameter file if it has been previously opened.
 *
 *
 */
   HRESULT EndOutput();

 
/** 
 * Inserts a &ltfile&gt tag in your XML file. 
 * <br><b>Role</b>: This method allows you to describe a file typed I/O.
 *
 * @param id
 * Name for your tag, useful for an easy access from your batch using "ParametersCAA" methods. See CATIBatchElementCAA
 * @param filePath
 * Absolute file path of your file.
 * @param dest
 * Used for remote execution of your batch. Can be set to NULL for local execution or in remote only if "automatic" is set to 1. See below.
 * Two cases 
 * <ul>
 * <li> For an input (InsertFile called in the intput section) : "dest"  represents the directory where the file is to be uploaded on the remote machine before the batch execution</li>
 * <li> For an output (InsertFile called in the output section) : "dest"  represents the directory where the file is to be downloaded on the local machine after the remote batch execution</li>
 * </ul>
 *
 * @param type
 * type of the file (for remote execution only)
 * <b>Legal Values</b>:
 *  <ul>
 *    <li>COMM_FILE_ASCII  : for a text  file </li>
 *    <li>COMM_FILE_BINARY : for a binary file</li>
 *  </ul>
 * 
 * @param fupload
 * download/upload mode (for remote execution only). 
 * Unique Legal Value supported:
 *  <ul>
 *    <li> CATBatchRightNow</li>
 *  </ul>
 *
 *  @param automatic
 *  used in remote only to determine the behaviour of "dest" (see above).
 *  If automatic = 0 means that in remote you have specify the directory "dest" yourself as explained above.
 *  If automatic = 1 means that you don't need to specify "dest" for a remote exection. The following rules will the be applied :
 *  <ul>
 *    <li>For an input <file> "dest", the upload directory target, will be a temporay directory on the remote machine </li>
 *    <li>For an output <file> "dest", the dowload directory will be equal to"filePath"  </li>
 *  </ul>
 *  The automatic mode is useful when you don't want to reference any specific target on the remote machine and then be able to run your batch anywhere.
 */

   HRESULT InsertFile(const char* id, const char* filePath, const char* dest, CATComFileType type, CATBatFileUploadable fupload, int automatic = 1);
  
/** 
 * Inserts a &ltfolder&gt tag in your XML file. 
 * <br><b>Role</b>: This method allows you to describe a folder typed I/O.
 *
 * @param id
 * Name for your tag, useful for an easy access from your batch using "ParametersCAA" methods. See CATIBatchElementCAA
 * @param folderPath
 * Absolute path of your folder.
 * @param dest
 * see InsertFile method
 *
 * @param type
 * type of the file contained in your folder (for remote execution only)
 * <b>Legal Values</b>:
 *  <ul>
 *    <li>COMM_FILE_ASCII  : for a text  file </li>
 *    <li>COMM_FILE_BINARY : for a binary file</li>
 *  </ul>
 * 
 * @param extension
 * extension of the files in your folder (without the dot).(for remote execution only)
 *
 * @param fupload
 * download/upload mode (for remote execution only).
 * Unique Legal Value supported:
 *  <ul>
 *    <li> CATBatchRightNow</li>
 *  </ul>
 *
 *  @param automatic
 * see InsertFile method
 */
  
  
   HRESULT InsertFolder(const char* id, const char* folderPath, const char* dest, CATComFileType type, 
	   const char* extension, CATBatFileUploadable	fupload, int automatic = 1);

  
 /** 
 * Inserts a &ltsimple_arg&gt tag in your XML file. 
 * <br><b>Role</b>: This method allows you to describe a simple typed I/O : int, double
 * To be retrieved in your batch using the BoolArg, FloatArg, StringArg methods of CATIBatchElementCAA, depending of the type of your input.
 *
 * @param id
 * Name for your tag, useful for an easy access from your batch using "ParametersCAA" methods. See CATIBatchElementCAA
 * @param value
 * value of your I/O
 */
   HRESULT InsertSimpleArg(const char* id, const char* value);
   
   
   
/** 
 * Inserts a custom string  in your XML file. 
 * <br><b>Role</b>: This method allows you to write a sting in the XML file.
 * This is to be used to insert your own tags and syntax. This string must be XML.
 *
 * @param tag
 * The string to be written in the XML file
 *
 */
 HRESULT InsertTag(const char* tag);
 
/** 
 * Retrieves the full path of the current XML parameter file.
 * <br><b>Role</b>: This method retrieves the full path of the current XML parameter file.
 *
 */
 HRESULT GetFullPath(CATUnicodeString& full_path);
 
/** 
 * Retrieves the current output parameter within a batch.
 * <br><b>Role</b>: This method must be used in your batch if you need to descibe its output while it's running.
 * Useful only if you don't know these outputs from the XML parameter file.
 *
 */
   static CATBatchParameters* GetOutputParamFile() { return _output; }
  
  /** 
 * Retrieves the path of the output XML file. 
 * <br><b>Role</b>: This method allows you to retrieve the path of the output XML file in a batch or even in the launcher process?
 *
 * @param uuid
 * the uuid identifying the batch, retrieved by CATBatClientMonitorCAA::StartV5Batch method
 * @param oPath
 * the path of the output XML file
 */ 
   
   static HRESULT GetOutputParamPath(CATUnicodeString& oPath, char* uuid);

/**
 * @nodoc
 */
   HRESULT BeginPCList();
/**
 * @nodoc
 */
   HRESULT EndPCList();
/**
 * @nodoc
 */
   HRESULT InsertPC(const char* pc);
 /**
 * @nodoc
 */
   HRESULT BeginLoginInfoList();
/**
 * @nodoc
 */
   HRESULT EndLoginInfoList();
/**
 * @nodoc
 */
   HRESULT InsertLoginInfo(const char* type, const char* name , char* buffer);
 /**
 * @nodoc
 */
   CATBatchParameters(CATBatchParameters& batch);
/**
 * @nodoc
 */
   static CATBatchParameters* InitOutputPath(char* uuid);

/**
 * @nodoc
 */
 HRESULT InsertFile(const char* id, const char* filePath, const char* dest, CATComFileType type);
/**
 * @nodoc
 */
 HRESULT InsertFolder(const char* id, const char* folderPath, const char* dest, CATComFileType type, 
	   const char* extension);  

 
 
 /**
 * @nodoc
 */
 HRESULT GetBatchName(CATUnicodeString& batch_name);
 
 
 /**
 * @nodoc
 */
 HRESULT SetId(CATUnicodeString& iId);
 
 
 /**
 * @nodoc
 */
 HRESULT GetId(CATUnicodeString& oId);
 
 
 
 /**
 * @nodoc
 */
 HRESULT GetTargetFolder(CATUnicodeString& oTargetFolder);

/** 
 * Inserts a custom string  in your XML file. 
 * Warning this tag won't be converted to UTF8
 * If you need UTF8 conversion please use InsertTag
 * <br><b>Role</b>: This method allows you to write a sting in the XML file.
 * This is to be used to insert your own tags and syntax. This string must be XML.
 *
 * @param tag
 * The string to be written in the XML file
 *
 */
 HRESULT InsertUTF8Tag(const char* tag);
 
 
  private :

	  char* _batch_name;
	  char* _file_name;
	  char _full_path[CATMaxPathSize];
	  unsigned int _fd;
	  short _in;
	  short _out;
	  short _pc;
	  short _li;

	  static CATBatchParameters* _output;
	  
	  CATUnicodeString _id;
	  CATUnicodeString _targetFolder;

 
};

#endif
