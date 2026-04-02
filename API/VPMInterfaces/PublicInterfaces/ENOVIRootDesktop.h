// -*-C++-*-
// COPYRIGHT DASSAULT SYSTEMES 2002
// =================================================================
// Interface ENOVIRootDesktop
// =================================================================
// 


/**
*	@CAA2Level L1
*	@CAA2Usage U3
*/

#ifndef ENOVIRootDesktop_H
#define ENOVIRootDesktop_H

#include "GUIDVPMInterfaces.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIRootDesktop;
#else
extern "C" const IID IID_ENOVIRootDesktop;
#endif




class CATUnicodeString;
class CATIAVPMProductClass;
class CATIAVPMFolderMaster;
class CATIAVPMDocumentMaster;
class CATIAVPMPartMaster;
class CATIVpmPredicate;

/**
* Top level aggregation object.
* <br><b>Role</b>:
* A singleton class, used to create Procduct Classes, PartMasters.
* Product Classes are directly below this singleton.
*/
class ExportedByGUIDVPMInterfaces ENOVIRootDesktop : public CATBaseUnknown {

	CATDeclareInterface;

	public:
		
		/**
		* Creates a ProductClass.
		* A ProductClass is a top level object. It is used
		* to aggregate one or several Product Root Class.
		*@param iId ProductClass Id.
		*@param oProductClass the created ProductClass.
		*@return S_OK
		*   The method succeeds.
		*@return E_FAIL
		*   The method fails.
		*/
		virtual HRESULT   CreateProductClass(CATUnicodeString& iId,
													  CATIAVPMProductClass *& oProductClass)=0;

		/**
		* Get the list of ProductClass.
		*@param oPCList the list of ProductClass.
		*@param iPredicate Predicate to apply to this request.
		*@return S_OK
		*   The method succeeds.
		*@return E_FAIL
		*   The method fails.
		*/
		virtual HRESULT	GetProductClassList(CATIVpmPredicate *iPredicate,
															CATLISTV(CATBaseUnknown_var)& oPCList)=0;




		/**
		* Creates a PartMaster.
		*@param iId PartMaster Id.
		*@param oPartMaster the created PartMaster.
		*@param iConfigurable A flag to indicate if the created PartMaster
		*	is configurable or not.
		*	<ul>
		*		<li><code>1</code>: PartMaster is configurable, default value.</li>
		*		<li><code>0</code>: PartMaster is not configurable.</li>
		*	</ul>
		*@return S_OK
		*   The method succeeds.
		*@return E_FAIL
		*   The method fails.
		*/
		virtual HRESULT   CreatePartMaster(const CATUnicodeString& iId,
													  CATIAVPMPartMaster *& oPartMaster,
													  int iConfigurable=1)=0;	 


};

CATDeclareHandler(ENOVIRootDesktop, CATBaseUnknown);

#endif
