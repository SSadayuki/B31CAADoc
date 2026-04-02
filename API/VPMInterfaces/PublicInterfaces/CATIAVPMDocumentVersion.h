#ifndef CATIAVPMDocumentVersion_h
#define CATIAVPMDocumentVersion_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObjectVersion.h"

// =================================================================
// Forward classes declaration
// =================================================================
// class CATIAVPMFolderVersion;
class CATIAVPMTechInterface;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMDocumentVersion;
#else
extern "C" const IID IID_CATIAVPMDocumentVersion;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage Document Version.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMDocumentVersion : public CATBaseUnknown //CATIAVPMObjectVersion
{
    /** @nodoc */
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT  get_DocType(CATBSTR & DocType)=0;

/**
 * @nodoc
 */
    virtual HRESULT  get_DocPersistency(CATBSTR & DocPersistency)=0;

/**
 * @nodoc
 */
    virtual HRESULT  AggregateData(const CATBSTR & DocUsage,
				   const CATBSTR & DocPath,
				   const CATBSTR & DocType,
				   const CATBSTR & DocPersistency)=0;

/**
 * @nodoc
 */
    virtual HRESULT  AggregateDataStream(const CATBSTR & DocUsage,
					 const SEQUENCE_octet & DocData,
					 const CATBSTR & DocType)=0;

/**
 * @nodoc
 */
    virtual HRESULT  DeleteData()=0;

/**
 * @nodoc
 */
    virtual HRESULT  get_Data(CATBSTR & DocPath)=0;



//SUU JAN-30-2003
//temp.
/**
 * @nodoc
 */
  //  virtual HRESULT  get_DocType(CATUnicodeString & DocType)=0;
/**
 * @nodoc
 */
   // virtual HRESULT  get_DocPersistency(CATUnicodeString & DocPersistency)=0;

/**
 * @nodoc
 */
//    virtual HRESULT  AggregateData(const CATUnicodeString & DocUsage,
//				   const CATUnicodeString & DocPath,
//				   const CATUnicodeString & DocType,
//				   const CATUnicodeString & DocPersistency)=0;

/**
 * @nodoc
 */
//  virtual HRESULT  AggregateDataStream(const CATUnicodeString & DocUsage,
//					 const SEQUENCE_octet & DocData,
//					 const CATUnicodeString & DocType)=0;

/**
 * @nodoc
 */
//   virtual HRESULT  get_Data(CATUnicodeString & DocPath)=0;
//------------------




/**
 * @nodoc
 */
    virtual HRESULT  get_DataStream(SEQUENCE_octet & DocData)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMDocumentVersion, CATBaseUnknown);

#endif

