#ifndef ENOVIExpandable_H_
#define ENOVIExpandable_H_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"
#include "CATICfgFilter.h"
#include "CATUnicodeString.h"

// for get_Tree2
#include "CATListOfCATIVpmPSExpandStruct.h"

class CATIVpmPSDMUFilter_var;
class CATIVpmPSExpandStruct_var;

#define PSR13_GET_TREE2

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIExpandable;
#else
extern "C" const IID IID_ENOVIExpandable;
#endif

/** @nodoc */
#define PS_ROOT		     1
/** @nodoc */
#define PS_DMU_CFG      -999
/** @nodoc */
#define PS_DMU_CFG_1    -998
/** @nodoc */
#define PS_DMU_CFG_2    -997
/** @nodoc */
#define PS_ALL		    -1001

//------------------------------------------------------------------
/**
 * Interface that defines and manages the Expandable (Tree).
 * <br><b>Role</b>: Provides different modes to expand Enovia objects (PRC, Item Instance, ...).
 */
class ExportedByGUIDVPMInterfaces ENOVIExpandable : public CATBaseUnknown 
{
    CATDeclareInterface;

public:


    /**
    * Retrieves the objects from the Tree that matches the criteria of specified DocumentType, Config Filter and Domain Name.
    * @param iLevelOrMode
    *   The Level or Mode.
    * <br><b>Legal Values</b>: The legal values for this are as follows;
    * <ol>
    * <li> PS_ALL    : returns all children matching with the filter
    * <li> PS_ROOT   : returns all direct children matching with the filter
    * <li> n>=1      : expands n levels
    * <li> n<=-1     : expands n levels with DMU mode
    * <li> n=0       : expands ALL levels
    * <li> PS_DMU_CFG: returns all children matching with the filter (and their parents) if all their parents are valid for the configuration filter
    * <li> PS_DMU_CFG_1: computes all children matching with the filter (and their parents) if all their parents are valid for the configuration filter. From this list, returns only the first-level children.
    * <li> PS_DMU_CFG_2: computes all children matching with the filter (and their parents) if all their parents are valid for the configuration filter. From this list, returns only the first-level and the second-level children.
    * </ol>
    * @param oList
    *   The List of Objects in the Tree.
    * @param oListLevel
    *   The List of Level.
    *   <br><b>Legal Values</b>: The default value for oListLevel is set to NULL.
    * @param icfgFilter
    *   The Config Filter.
    *   <br><b>Legal Values</b>: The default value for the CATICfgFilter is set to NULL.
    * @param iType
    *   The Type of returned object.
    *   <br><b>Legal Values</b>: The default value for iType is set to "VPMItemInstance".
    */
    virtual HRESULT get_Tree(
        long iLevelOrMode,
        CATLISTV(CATBaseUnknown_var)& oList,
        CATListOfInt* oListLevel = NULL,
        const CATICfgFilter_var& iCfgFilter = NULL_var,
        const CATUnicodeString& iType = "VPMItemInstance")=0; 

    /**
    * @nodoc
    */
    virtual HRESULT get_Parent(
        CATLISTV(CATBaseUnknown_var)& oListParent,
        const CATUnicodeString& iType = "VPMItemInstance")=0;

    /**
    * @nodoc
    */
    virtual HRESULT get_ExpandTypes(CATListOfCATUnicodeString& oListTypes) = 0;

    enum ExpandDocMode
    {

	    // to get no documents
	    NoDocuments = 0,

	    // to get instance documents
	    OnInst_Documentations,
	    OnInst_Representations,
	    OnInst_Documents,

	    // to get reference documents
	    OnRef_Documentations,
	    OnRef_Representations,
	    OnRef_Documents,

	    // to get instance and reference documents
	    OnInstAndRef_Documentations,
	    OnInstAndRef_Representations,
	    OnInstAndRef_Documents

    };

    /**
     * @nodoc
     * @param iMode
     *   Expand mode PS_ROOT, PS_ALL, PS_DMU_CFG.
     * @param iLevel
     *   Depth of expand from 0 to n.
     * @param oResult
     *   List of CATIVpmPSExpandStruct entities ; each entity contains:
     *   An Object, its Reference (if any), its Name (if any), its Documents (if any), etc.
     * @param ihFilter
     *   Explicit filter parameter which can be a combination of predicates.
     * @param iType
     *   Type of wanted objects.
     * @param iDocMode
     *   Mode of document retrieval.
     * @param iRetrieveTP
     *   Retrieve TechPack associated to entities.
     **/
    virtual HRESULT get_Tree2(
        int                             iMode,
        int                             iLevel,
        CATListOfCATIVpmPSExpandStruct& oResult,
        const CATIVpmPSDMUFilter_var&   ihFilter,
        const CATUnicodeString&         iType = "VPMItemInstance",
        ENOVIExpandable::ExpandDocMode  iDocMode = ENOVIExpandable::NoDocuments,
        CATBoolean                      iRetrieveTP = FALSE) = 0;

};

//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIExpandable, CATBaseUnknown);

#endif
