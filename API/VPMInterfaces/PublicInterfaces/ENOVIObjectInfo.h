#ifndef ENOVIObjectInfo_H
#define ENOVIObjectInfo_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// --------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 1999
// -------------------------------------------------------------
// Responsable: AHC
// --------------------------------------------------------------
// Macro: ENOVIObjectInfo
// --------------------------------------------------------------
// Historique:
// Creation : 99/09/12 > AHC
// --------------------------------------------------------------
//

#include "sequence_octet.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
#include "CORBAAnyDef.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIObjectInfo ; 
#else
extern "C" const IID IID_ENOVIObjectInfo ;
#endif

class ENOVIPropertyInfo_var ;
class ENOVIPackageInfo_var ;
class ENOVIObjectInfo_var ;
class ENOVIMethodInfo_var ;
class VPMIDicElement ;
class CATIContainer_var ;

//------------------------------------------------------------------
/**
 * Interface to manage Object Info.
 */
class ExportedByGUIDVPMInterfaces ENOVIObjectInfo : public CATBaseUnknown 
  {
/**
 * @nodoc
 */
  CATDeclareInterface;

  public:

  // -> Get the objectType 
/**
 * @nodoc
 */
  virtual const CATUnicodeString& getName () = 0 ;

  // -> Get the objectSupType 
/**
 * @nodoc
 */
  virtual const CATUnicodeString& getSupType () = 0 ;


  // -> Get the objectSupType 
  //
  // Rc = S_OK    -> SupType is valuated 
  // Rc = S_FALSE -> No SupType  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT  getSupType ( ENOVIObjectInfo_var& oObjectInfo ) = 0 ;


  // -> Get the entityName 
/**
 * @nodoc
 */
  virtual const CATUnicodeString& getEntityName () = 0 ;


  // -> Get the GenesisSchema
/**
 * @nodoc
 */
  virtual const CATUnicodeString& getGenesisSchema () = 0 ;


  // -> Get the GenesisDomain
/**
 * @nodoc
 */
  virtual const CATUnicodeString& getGenesisDomain ()  = 0 ;


  // -> newInstancewithIdentifier
  //
  // Rc = S_OK    -> creation OK  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT newInstanceWithIdentifier 
                ( const CATIContainer_var& iCont, 
                  const CORBAAny&          iIdentifier  ,
                  CATBaseUnknown_var&      ioInstance   ) = 0 ;


  // -> newInstance
  //
  // Rc = S_OK    -> creation OK  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT newInstance 
                ( const CATIContainer_var& iCont, 
                  CATBaseUnknown_var& ioInstance         ) = 0 ;


  // bindInstance
  //
  // Rc = S_OK    -> bind ok 
  // Rc = S_FALSE -> bind is already done  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT bindInstance 
                ( const CATIContainer_var&       iCont, 
                  const CATBaseUnknown_var&      iRealObj ,
                  CATBaseUnknown_var&            oObj     ) = 0 ;


  // bindInstance
  //
  // Rc = S_OK    -> bind ok 
  // Rc = S_FALSE -> bind is already done  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT bindInstanceP 
                ( const CATIContainer_var&       iCont, 
                  void*                          iRealObj ,
                  CATBaseUnknown_var&            oObj     ) = 0 ;


  // bindInstanceList
  //
  // Rc = S_OK    -> bind ok 
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT bindInstanceList 
                ( const CATIContainer_var&            iCont, 
                  const CATLISTV(CATBaseUnknown_var)& iRealObjList ,
                  CATLISTV(CATBaseUnknown_var)&       oObjList     ) = 0 ;
  

  // get_Instance
  //
  // Rc = S_OK     -> bind ok 
  // Rc = S_FALSE  -> object not found 
/**
 * @nodoc
 */
  virtual HRESULT get_Instance(const SEQUENCE(octet)& iOID, CATBaseUnknown_var& oInstance) = 0;



  // -> IsAKindOf
  //
  // Rc = S_OK    -> IsAKindOf is TRUE 
  // Rc = S_FALSE -> IsAKindOf is FALSE  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @deprecated V5R14
 *
 * This method allows you to test the inheritance of an object type against the 'iType' input
 * parameter. For instance if you call 'object_info->IsAKindOf("ENOVIA_VPMItemInstance")' and
 * 'object_info' is an ENOVIObjectInfo for a customized ItemInstance type, it will return true.
 *
 * Note that using this method is deprecated, as it masks the method CATBaseUnknown::IsAKindOf(const char*)
 * (because of C++ names visibility, the compiler always chooses ENOVIObjectInfo::IsAKindOf(const CATUnicodeString&)
 * over CATBaseUnknown::IsAKindOf(const char*) ), and those 2 methods are very different behaviour:
 *  - CATBaseUnknown::IsAKindOf(const char*) tests the type of the ObjectInfo object itself (i.e. it will
 *      return false when called with the "ENOVIA_VPMItemInstance" string in the example above, but
 *      it will return true for "INFO_ENOVIA_ItemInstance" ),
 *  - ENOVIObjectInfo::IsAKindOf(const CATUnicodeString&) tests the type of the class of objects represented
 *      by the ObjectInfo (thus returning true for "ENOVIA_ItemInstance" and false for "INFO_ENOVIA_ItemInstance"
 *      in the previous example).
 *
 * Because those 2 methods have very different behaviour (and given that migrating to using exclusively
 * CATBaseUnknown::IsAKindOf is easy), this method will be suppressed in a future release: you are advised
 * to invoke CATBaseUnknown::IsAKindOf explicitly (it is not possible to rely on the compiler for this since
 * C++ explicitly precludes it in this case!) as in the following code snippet:
 *
 *                    ENOVIObjectInfo *object_info = ...
 *                    HRESULT rc = object_info->GetImpl()->CATBaseUnknown::IsAKindOf("INFO_ENOVIA_VPMItemInstance");
 *
 * which should replace code like:
 *
 *                    object_info->IsAKindOf("ENOVIA_VPMItemInstance");
 *
 * A side benefit will be that a CATUnicodeString will not be implicitly constructed anymore when calling
 * IsAKindOf with a literal C string.
 *
 * Also note that another difference between CATBaseUnknown::IsAKindOf and ENOVIObjectInfo::IsAKindOf is the
 * possible return values:
 *            - CATBaseUnknown::IsAKindOf return S_OK or S_FALSE (works like a boolean value).
 *            - while ENOVIObjectInfo::IsAKindOf returns a failure (works like an ordinary HRESULT) to mean 'false'.
 *
 */
  virtual HRESULT IsAKindOf ( const CATUnicodeString& iType )= 0 ;


  // -> Get the associated PackageInfo
  //
  // Rc = S_OK    -> ObjectInfo is defined for this index
  // Rc = E_FAIL  -> a problem occurs during the process
/**
 * @nodoc
 */
  virtual HRESULT getPackageInfo ( ENOVIPackageInfo_var& oPackageInfo ) = 0 ;



  // -> Give the number of PropertyInfo 
  //
  // Rc = S_OK    -> Count is valuated 
  // Rc = S_FALSE -> No PropertyInfo  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT PropertyInfoCount ( int& ioCounter ) = 0 ;


  // -> Get all definition of object type
  //
  // Rc = S_OK    -> ObjectInfo is defined for this index 
  // Rc = S_FALSE -> ObjectInfo is not defined for this index, return the last
  //                 ObjectInfo  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT getPropertyInfo
                ( int                 iIndex          ,             
                  ENOVIPropertyInfo_var& oPropertyInfo  )= 0 ;
  


  // -> Get a definition of Attribute type
  //
  // Rc = S_OK    -> ObjectInfo is defined for this name 
  // Rc = S_FALSE -> ObjectInfo is not defined for this name
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT getPropertyInfo
                ( const  CATUnicodeString&  iObjectType  , 
                  ENOVIPropertyInfo_var& oPropertyInfo  )= 0 ;



  // -> Get all definition of Aggregating Attribute
  //
  // Rc = S_OK    -> ObjectInfo is defined for this index 
  // Rc = S_FALSE -> ObjectInfo is not defined for this index, return the last
  //                 ObjectInfo  
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT getAggregatingPropertyInfo(int iIndex, ENOVIPropertyInfo_var& oPropInfo)=0;



  // -> Get a identifier 
  //
  // Rc = S_OK    -> UUID is defined  
  // Rc = S_FALSE -> UUID is not defined 
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT GetIdentifier 
                  (CORBAAny& oIdentifier  ) =0 ;


  // -> Get a Dictioanry Element 
  //
  // Rc = S_OK    -> DicElement is defined  
  // Rc = S_FALSE -> DicElement is not defined 
  // Rc = E_FAIL  -> a problem occurs during the process 
/**
 * @nodoc
 */
  virtual HRESULT GetDicElement 
                  (VPMIDicElement** oDicItem ) =0 ;



  // -> Get a method definition
  //    If iInitIfNotExisting equals 1,
  //    creates the method definition if not found
  //
  // Rc = S_OK    -> method was found 
  // Rc = S_FALSE -> method was not found 
/**
 * @nodoc
 */
  virtual HRESULT getMethodInfo
                ( const  CATUnicodeString&  iMethod  , 
                  ENOVIMethodInfo_var& oMethodInfo,
                  int iInitIfNotExisting = 0 )= 0 ;


/**
 * @nodoc
 */
  virtual HRESULT getMethodInfo
                ( const  CATUnicodeString&  iClass  ,
		      const  CATUnicodeString&  iMethod  ,
		     void *                   iPtr  ,
                  ENOVIMethodInfo_var& oMethodInfo )= 0 ;
  };

//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIObjectInfo,CATBaseUnknown);
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif
