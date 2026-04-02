#ifndef CATRSCCATALOG_H
#define CATRSCCATALOG_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifdef _WINDOWS_SOURCE 
#ifdef __NS0S1MSG
/** @nodoc */
#define ExportedByNS0S1MSG  __declspec(dllexport) 
#else
/** @nodoc */
#define ExportedByNS0S1MSG  __declspec(dllimport) 
#endif
#else
/** @nodoc */
#define ExportedByNS0S1MSG
#endif

#include "CATString.h"
class CATInterRscCatalog;
class CATListValCATString;

/**
 * Resource catalog class. 
 * <b>Role</b>: Processing a resource catalog file.
 * The resource catalog file contains keys and their corresponding values. Values are parameterized ASCII string 
 * (see @href CATString ) which may, for example, identify resources. NLS (National Langage Support) is not supported,
 * this class must be compared to the @href CATMsgCatalog class: the current class must be used for all non hard-coded
 * strings which must not be translated into other languages.</br>
 * A common use of this class corresponds to the storage of resource identifications through the use of dedicated
 * sub-keys. See for example the use of the Icon.Normal sub-key described into the @href CATImplementHeaderResources
 * documentation.</br>
 * A resource catalog file value may be used to represent a directly resource (for example, a
 * workbench category, i.e. the place where a given
 * workbench appears in the menu tree). It may also be used to represent a reference to a resource (for example,
 * for an icon, you will put the icon file name).</br>
 * The class does not support control 
 * characters (for example \a, \n, \t).</br>
 * A value can be parameterized, ie contains parameters you
 * value at run-time. A parameter begins with /p or /P in the value.</br>
 * Here is an example of a resource catalog file content:
 * <pre>
 * Key1 = "This is a simple parameterized string.";
 * Key2 = "This parameterized string includes the parameter /P1 that
 *             is valued by your application at run-time.";
 * Key3 = "This is a", "compound ", "parameterized string.";</pre>
 * A resource catalog file posess the .CATRsc suffix and is retrieved from the folders specified by the
 * CATMsgCatalogPath variable.
 * The localized version of the resource catalog is searched first. If it does not exist,
 * the english version is taken.</br>
 * Example:
 * In a japanese environment, if the CATMsgCatalogPath variable is valued the following way:
 * <pre>   CATMsgCatalogPath=C:\PersonalFolder;C:\Program Files\Dassault Systemes\B12</pre>
 * then, CATIA search the resource catalog file into the following paths:
 * <pre>   1 - C:\PersonalFolder\Japanese
 *   2 - C:\PersonalFolder
 *   3 - C:\Program Files\Dassault Systemes\B12\Japanese
 *   4 - C:\Program Files\Dassault Systemes\B12</pre>
 */

// Catalog sample
// --------------
// | // This is a comment.
// |
// |  FirstKey="Hello /P01"; // /P01 is the first parameter
// |
// |  SecondKey = "This is a ", "message ",
// |               "from Mars.";
// |
// |  AnotherKey = "You can use control characters \t \n ",
// |               "defined in the C++ language";
//

class ExportedByNS0S1MSG CATRscCatalog
{
  public:
  // Constructors
  // ============

/**
 * Constructs an empty resource catalog.
 */
     CATRscCatalog();

/*
 * Copy constructor.
 * @param iRscCatalog
 *   Resource catalog to copy
 * 
 */
     CATRscCatalog(const CATRscCatalog &iRscCatalog);

     ~CATRscCatalog();

/**
 * Assignment operator.
 * @param iRscCatalog
 *   The resource catalog to be copied
 * @return  
 *   The resource catalog resulting from the assignment
 */
     CATRscCatalog &operator =(const CATRscCatalog &iRscCatalog) ;

/**
 * Loads a resource catalog by means of its name and (if desired)
 * of a path.
 * Don't forget to call @href CATRscCatalog#GetError after calling this
 * service to check potential syntax errors in the resource
 * catalog.
 * @param iNameOfCatalogToLoad
 *   Name of the resource catalog to be retrieved
 * @param iPathName
 *   Path for searching the catalog to be retrieved
 * @return
 *   boolean which indicates if the catalog has been loaded.
 *   <br><b>Legal values</b>: <tt>0: False</tt> 
 *   if the catalog is not loaded, or <tt>Other: True</tt> 
 *   if the catalog is loaded.
 */
     int LoadRscCatalog (const CATString &iNameOfCatalogToLoad, 
                         const char *iPathName = NULL);

/**
 * Returns a syntax error.
 * <br><b>Role:</b>
 * Returns the first syntax error found detected in the resource 
 * catalog during the @href CATRscCatalog#LoadRscCatalog operation.
 * This service should be called after calling @href  
 * CATRscCatalog#LoadRscCatalog to check potential errors.
 * @return
 *   String containing the error message.
 */
     static const CATString GetError ();

/**
 * Computes a message from the resource catalog.
 * <br><b>Role</b>: Computes a message from the resource catalog using 
 * the message key. Before calling the service,
 * the resource catalog must have been loaded using
 * LoadRscCatalog.  
 * @param iRscKey
 *   Key of the resource to be retrieved
 * @param oRsc
 *   The retrieved resource.
 * @param iParams
 *   Array giving to the method possible parameter values
 *   which the method will integrate into the parameterized
 *   message. 
 *   The value count should correspond to the message parameter
 *   count. If it is not the cases, a default behaviour
 *   is foreseen: "?" characters are introduced into the
 *   computed output resource string. 
 *   NULL default value coresponds to no parameter values.
 * @param iNbParams
 *   iParams array value count.
 *   0 default value corresponds to no parameter values.
 * @return
 *   <br><b>Legal values</b>: <tt>0: False</tt> 
 *   if a problem occured, or <tt>Other: True</tt> 
 *   otherwise.
 *   Use @href CATRscCatalog#GetError to retrieve the current error
 */
     int GetCatalogRsc( const CATString &iRscKey  , 
		        CATString &oRsc     ,
		        CATString *iParams = NULL ,
		        int iNbParams = 0 ); 

/**
 * Computes a message from a given resource catalog.
 * <br><b>Role</b>: Computes a message from a given resource catalog 
 * using the message key. This service does not require 
 * that a call to LoadRscCatalog have been made: it loads
 * it if it not already done (this service is a static method).  
 * @param iCatalogName
 *   Name of the resource catalog containing the resource to be retrieved.
 * @param iRscKey
 *   Key of the resource to be retrieved
 * @param oRsc
 *   The computed output output resource string.
 * @param iParams
 *   Array giving to the method possible parameter values
 *   which the method will integrate into the parameterized
 *   message. 
 *   The value count should correspond to the message parameter
 *   count. If it is not the cases, a default behaviour
 *   is foreseen: "?" characters are introduced into the
 *   computed output resource string. 
 *   NULL default value coresponds to no parameter values.
 * @param iNbParams
 *   iParams array parameters count.
 * @param iDefaultRsc
 *   Resource that the method should use in case of error.
 * @return
 *   <br><b>Legal values</b>: <tt>0: False</tt> 
 *   if a problem has occured, or <tt>Other: True</tt> 
 *   otherwise.
 *   Use GetError to retrieve the current error
 */
     static int BuildResource (const CATString &iCatalogName,
			       const CATString &iRscKey,
			       CATString &oRsc,
			       CATString *iParams = NULL,
			       int iNbParams = 0,
			       const CATString &iDefaultRsc = (char*)NULL );

/**
 * Retrieves the list of keys of the catalog.
 * @param oKeyList
 *   Key list. 
 *   <br><b>Legal values</b>: <tt>NULL</tt> 
 *   to get the key count, or <tt>Other</tt> 
 *   to get also the keys themselves. A call with the NULL value
 *   should be done first to get the key count and thus allocate
 *   correctly the oKeyList list for the next call.
 * @return
 *    Key count.
 */  
     int GetCatalogKeys ( CATListValCATString *oKeyList =  NULL );

/**
 * Unloads a resource catalog by means of its name.
 * @param iCatalogName
 *    Name of the catalog to be unloaded.
 * @return
 *   <br><b>Legal values</b>: <tt>0: False</tt> 
 *   if a problem has occured, or <tt>Other: True</tt> 
 *   otherwise.
 */
     static int UnloadRscCatalog ( const CATString &iCatalogName );

  private:
/** @nodoc */     
     CATInterRscCatalog *_CatalogRef;
};

#endif


