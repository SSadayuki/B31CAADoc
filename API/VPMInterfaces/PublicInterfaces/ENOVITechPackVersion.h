// -*-C++-*-
//===================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================
//

/**
 *  @CAA2Required
 */

#ifndef ENOVITechPackVersion_H
#define ENOVITechPackVersion_H

#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfENOVITechPackVersion.h"
#include "GUIDVPMInterfaces.h"
#include "ENOVGenericLink.h"

class CATIVpmAFLAction_var;
class ENOVIReferenceObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVITechPackVersion;
#else
extern "C" const IID IID_ENOVITechPackVersion;
#endif

class ExportedByGUIDVPMInterfaces ENOVITechPackVersion : public CATBaseUnknown {

	CATDeclareInterface;

	public:

		/**
		* @nodoc
		* Returns TechPack document.
		*/
		virtual HRESULT get_VaultDocumentURL(SEQUENCE(octet) & oDocURL)=0;

		/**
		* @nodoc
		* Sets TechPack Document.
		*/
		virtual HRESULT set_VaultDocumentURL(const SEQUENCE(octet) & iDocVault)=0;

		
		/**
		* @nodoc
		* Returns TechPack V_version version string.
		*/
		virtual HRESULT get_Version(CATUnicodeString & oVersion)=0;

		/**
		* @nodoc
		* Set TechPack version, use carefully version string
		* must be unique for all versions of a TechPack.
		*/
		virtual HRESULT set_Version(const CATUnicodeString & iVersion)=0;

		/**
		* @nodoc
		* Returns TechPack description.
		*/
		virtual HRESULT get_Description(CATUnicodeString & oDesc)=0;

		/**
		* @nodoc
		* Sets TechPack description.
		*/
		virtual HRESULT set_Description(const CATUnicodeString & iDesc)=0;

		/**
		* @nodoc
		* Returns VPMObjects (PS Object) linked (throught
		* generic links ) to this TechPack.
		* @param iLinkType2 :
		*    ENOVGenericLink::Owner only the owning PSObject is returned
		*    ENOVGenericLink::Reference only the PSObjects referencing
		*       this TechPackVersion are returned.
		*    ENOVGenericLink::All all the PSObjects linked to this TechPack
		*       are returned.
		*/
		virtual HRESULT get_LinkedPSObjects(
			ENOVGenericLink::SecondaryLinkType iLinkType2,
			CATLISTV(CATBaseUnknown_var) & olObjects)=0;

		/**
		* @nodoc
		* Returns TechPack Category.
		*/
		virtual HRESULT get_Category(SEQUENCE(octet) & oCategory)=0;

		/**
		* @nodoc
		* Sets TechPack Category.
		*/
		virtual HRESULT set_Category(const SEQUENCE(octet) & iCategory)=0;
								
								
		/**
		* @nodoc
		* Creates a new version from this.
		*/
		virtual HRESULT CreateNewVersion(
		 const ENOVIReferenceObject_var &iNewVersionOwner,
		 const CATIVpmAFLAction_var &iAction,
		 ENOVITechPackVersion_var & oNewVersion)=0;

		/**
		* @nodoc
		* Returns all TechPack version of this TechPack.
		*/
		virtual HRESULT get_AllVersions(
		 CATLISTV(ENOVITechPackVersion_var) & lVersions)=0;
    
		/**
		* @nodoc
		* Returns last TechPack version
		*/
    virtual HRESULT get_LastVersion(
		 ENOVITechPackVersion_var & oLastVersion)=0;

		/**
		* @nodoc
		* Returns last TechPack version
		*/
    virtual HRESULT get_Owner(ENOVIReferenceObject_var & oTechPackOwner)=0;

		/**
		* @nodoc
		* S_OK => It's the last version
    * else S_FALSE
		*/
    virtual HRESULT isLastVersion()=0;


};

CATDeclareHandler(ENOVITechPackVersion, CATBaseUnknown);

#endif
