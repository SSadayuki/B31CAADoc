//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#include "VPMIDicInterfaces.h"

#ifndef VPMIDicMgr_h
#define VPMIDicMgr_h

#include "CATCORBABoolean.h"


#include "CATBaseUnknown.h"

#include "CATLISTPIUnknown.h"

class VPMIDicPackage;
class VPMIDicCategory;
class VPMIDicPrimitive;
class VPMIDicElementH;
class CATDbBinary;

#include "VPMDicPRIMITIVEType.h"
#include "VPMDicPERSISTENT.h"
#include "VPMDicCONTENT.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByVPMIDicInterfaces IID IID_VPMIDicMgr;
#else
extern "C" const IID IID_VPMIDicMgr;
#endif

/**
 *  @CAA2Level L1
 *  @CAA2Usage U3
 */ 

/**
 * This class enables to manage all dictionary data.
 * <b>role</b>: Get VPMIDicMgr Interface each time you need to access to the dictionary
 * using the global Function GetVPMIDicMgr
 */
class  ExportedByVPMIDicInterfaces VPMIDicMgr: public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Initializes the Dictionary Manager.
 * It must be called after the dictionary manager creation.
 * @param iForadmin : Must always be set to 1
 * @return S_OK, E_FAIL 
 */
virtual HRESULT Init(const int iForadmin)=0;

/**
 * @nodoc
 */
virtual HRESULT Save()=0;

/**
 * Loads a package from a given directory. 
 * @param iDirName     : Directory containing the package
 * @param iPackageName : Package name
 * @param iMode        : the only valid value is VPMDicFILE
 */
virtual HRESULT LoadPackageFromDir ( const CATString * iDirName
                                   , const CATString * iPackageName
                                   , const VPMDicPERSISTENT iMode
                                   )=0;
/**
 * Loads a package from a given directory. 
 * @param iDirName     : Directory containing the package
 * @param iPackageName : Package name
 * @param iMode        : the only valid value is VPMDicFILE
 * @param iContent     : Package type of content (either VPMDicMETADATA, VPMDicTUNING,
 *                       VPMDicRBODEF, or VPMDicRBOMAP)
 */
virtual HRESULT LoadPackageFromDir ( const CATString * iDirName
                                   , const CATString * iPackageName
                                   , const VPMDicPERSISTENT iMode
                                   , const VPMDicCONTENT iContent
                                   )=0;

/**
 * Loads a package.
 * @param iPackageName : Package name
 * @param iMode        :
 */
virtual HRESULT LoadPackage ( const CATString * iPackageName
                            , const VPMDicPERSISTENT iMode
                            )=0;
/**
 * Loads a package.
 * @param iPackageName : Package name
 * @param iMode        : the only valid value is VPMDicFILE
 * @param iContent     : Package type of content (either VPMDicMETADATA, VPMDicTUNING,
 *                       VPMDicRBODEF, or VPMDicRBOMAP)
 */
virtual HRESULT LoadPackage ( const CATString * iPackageName
                            , const VPMDicPERSISTENT iMode
                            , const VPMDicCONTENT iContent
                            )=0;

/**
 * @nodoc
 */
virtual HRESULT GetPackages(CATLISTP(IUnknown) * ioPackages)=0;

/**
 * @nodoc
 */
virtual HRESULT GetPackages(const CATString * iDomainName
                           ,CATLISTP(IUnknown) * ioPackages)=0;

/**
 * @nodoc
 */
virtual HRESULT GetPackage(const CATString * iName
			  ,VPMIDicPackage ** oPackage )=0;
/**
 * @nodoc
 */
virtual HRESULT CreatePackage(const CATString * iName
			     ,VPMIDicPackage ** oPackage )=0;
/**
 * @nodoc
 */
virtual HRESULT CreatePackage(const CATString * iName
			     ,const CATDbBinary * iUuid
			     ,const CATString * iDomain
			     ,VPMIDicPackage ** oPackage )=0;
/**
 * @nodoc
 */
virtual HRESULT RemovePackage (const CATString * iName)=0;
  
/**
 * @nodoc
 */
virtual HRESULT SavePackageToDir ( const CATString *iDirName
			          ,const CATString *iPackName
			          ,const VPMDicPERSISTENT iMode ) = 0;

/**
 * @nodoc
 */
virtual HRESULT SavePackage ( const CATString *iPackName
			     ,const VPMDicPERSISTENT iMode ) = 0;
/**
 * @nodoc
 */
virtual HRESULT GetCategory(const CATString * iName
			   ,VPMIDicCategory ** oCategory )=0;

/**
 * @nodoc
 */
virtual HRESULT CreateCategory(const CATString * iName
			   ,VPMIDicCategory ** oCategory )=0;

/**
 * @nodoc
 */
virtual HRESULT RemoveCategory (const CATString * iName)=0;

/**
 * @nodoc
 */
virtual HRESULT GetCategories(CATLISTP(IUnknown)  * ioPackages)=0;

/**
 * @nodoc
 */
virtual HRESULT SaveCategories(const VPMDicPERSISTENT iMode)=0;

/**
 * @nodoc
 */
virtual HRESULT GetPrimitive(const VPMDicPRIMITIVEType iPrimitive
 			    ,VPMIDicPrimitive ** oPrimitive )=0;

/**
 * @nodoc
 */
virtual HRESULT SavePrimitives (const VPMDicPERSISTENT iMode )=0;

/**
 * @nodoc
 */
virtual HRESULT Search (const CATDbBinary *uuid, VPMIDicElementH **Elt)=0;
/**
 * @nodoc
 */
virtual HRESULT SearchByName (const CATString *iName, CATLISTP(IUnknown) * ioElements )=0;
};

CATDeclareHandler(VPMIDicMgr,CATBaseUnknown);


/**
 * Retrieves an interface to the dictionary manager.
 * @param oMyDicMgr : Dictionary manager
 * @return S_OK, E_FAIL
 */
ExportedByVPMIDicInterfaces HRESULT GetVPMIDicMgr (VPMIDicMgr **oMyDicMgr);

#endif




