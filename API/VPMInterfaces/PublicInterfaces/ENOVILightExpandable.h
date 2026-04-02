// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : ENOVILightExpandable.h                                      
// --------------------------------------------------------------
// Content     : Access Interface for Light Expand
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/09/19 > JDV                                          
// --------------------------------------------------------------

#ifndef ENOVILightExpandable_H_
#define ENOVILightExpandable_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATUnicodeString.h"
#include "CATUnicodeString.h"
#include "CATICfgFilter.h"
#include "CATListOfCATIVpmLightExpandObject.h"
#include "CATIVpmLightExpandObject.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVILightExpandable;
#else
extern "C" const IID IID_ENOVILightExpandable;
#endif

/**
  * Predefined Expand Levels
 */
// Do not expand further the Product Instances
#define LEX_MODE_42 -2
// Expand in DMU Search mode (get only the leaves, do not bring back parents)
#define LEX_MODE_DMU -1
// Expand all
#define LEX_MODE_ALL 0

/**
  * Type of the tree to get
  *    LEX_ItemInstance: will return Part Instances, Product Instances and Tempo Instances.
  *    LEX_ProductComponent: will return Generic Components.
  *    LEX_GenericComponent: will combine LEX_ItemInstance and LEX_ProductComponent.
  *    LEX_PartVersion: will return References and Assembly Relations when expanding a Reference.
  *    LEX_ProdSpec: will return Product Specifications when expanding a PRC.
  *    LEX_CH: will return Configuration Handlers when expanding a PRC.
  *    LEX_PT: will return Product Types when expanding a PRC.
  *    LEX_Sheet: will return Sheets when expanding a Table Of Content.
 */
enum LightExpandTreeType
{
   LEX_ItemInstance,
   LEX_GenericComponent,
   LEX_ProductComponent,
   LEX_PartVersion,
   LEX_ProdSpec,
   LEX_CH,
   LEX_PT,
   LEX_PS_CH_PT,
   LEX_Sheet
};


/**
 */

class ExportedByGUIDVPMInterfaces ENOVILightExpandable : public CATBaseUnknown 
{
   CATDeclareInterface;

   public :

      /**
        * Expands a root object, returning only light structures (no object is loaded in session).
        * @param iExpandLevel: level of expand to go to.
        *      - LEX_MODE_ALL: expand all and continue to expand Product Instances.
        *      - LEX_MODE_42: expand all but do not expand Product Instances further.
        *      - LEX_MODE_DMU: expand all returning only the matching objects to the filter.
        *      - 1, 2, 3...: expand to the specified level.
        * @param iSelectClause: Additional attributes to get the values from.
        * @param oResult: result of the expand, an ordered list of light structures.
        * @param iType: type of the tree to get (LEX_ItemInstance, LEX_GenericComponent or LEX_ProductComponent).
        * @param iDocCriteria: type of the documents to get on the parts.
        * @param iTechPackCriteria: retrieves or not Technological Packages.
        * @param iCfgFilter: Configuration filter.
        * @return S_OK if everything went fine
        *         E_FAIL if there was an error
       */

      virtual HRESULT getLightTree( int iExpandLevel, CATListOfCATUnicodeString & iSelectClause,
                      CATListOfCATIVpmLightExpandObject * & oResult, int iType, DocumentCriteria iDocCriteria = LEX_NoDocuments,
                      CATBoolean iTechPackCriteria = FALSE, const CATICfgFilter_var & iCfgFilter = NULL_var ) = 0;
};


#define CATLIST_APPLY_DELETE_LIGHTEXPAND(LightExpandObjectList) \
if ( LightExpandObjectList )                                               \
{                                                                          \
   int LEOLnb = LightExpandObjectList->Size();                             \
   for( int iLEOL=1; iLEOL<=LEOLnb; iLEOL++ )                              \
   {                                                                       \
      CATIVpmLightExpandObject * pLEO = (*LightExpandObjectList)[iLEOL];   \
      if ( pLEO ) { delete pLEO; pLEO = NULL; }                            \
   }                                                                       \
   LightExpandObjectList->RemoveAll();                                     \
   delete LightExpandObjectList; LightExpandObjectList = NULL;             \
}                                                                          


// -----------------------------------------------------------------
// Handler definition
// -----------------------------------------------------------------

/** @nodoc */
CATDeclareHandler( ENOVILightExpandable, CATBaseUnknown );

#endif
