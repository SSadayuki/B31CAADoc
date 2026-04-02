#ifndef ENOVIAFilterer_h
#define ENOVIAFilterer_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
#include "GUIDVPMInterfaces.h"
#include "CATTypUtilit.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATIVpmPredicate.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIVpmPredicate;
class CATBaseUnknown;
class CATTime;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIAFilterer;
#else
extern "C" const IID IID_ENOVIAFilterer;
#endif

//------------------------------------------------------------------

/**
 * Interface to define the properties of a Generalized filter.
 * <b>Role</b>: ENOVIAFilterer is a behavior interface. It defines
 * the properties of a Generalized Filter, which can be used to filter
 * the filterable objects.
 * Important: the objects which adhere to ENOVIAFilterer are assumed to be organized in a tree, not a graph.
 * <p> The generalized filter is an AND combination of specialized sub-filters:
 * <ol>
 * <li> an ATTRIBUTE filter : specifies a predicate on the attribute values
 * <li> a DISCIPLINE filter : specifies a predicate on a discipline attribute
 * <li> a ZONE filter : specifies how the Bounding volume of the filterable objects are related to the volume
 *                   of an other object contained in the filter (FULLY_IN, PARTLY_IN, ....)
 * <li> a CONFIG filter : specifies rank, date, milestone and specification criteria.
 * <li> a VOLUMIC filter : specifies how the Bounding volume of the filterable objects are related to the 3D volume
 *                   contained in the filter (FULLY_IN, PARTLY_IN, ....)
 * </ol>
 * <p> EACH sub-filter can itself be an AND combination of elementary filters (of the same type).
 * <p> For example:
 * The generalized filter can be made of a CONFIG sub-filter and a ZONE sub-filter.
 * The CONFIG sub-filter can be made of two elementary CONFIG filters combined by an AND operation.
 * The ZONE sub-filter can be made of three elementary ZONE filters combined by an AND operation.
 * <p> When making changes to the contents of the generalized filter, a 'type' must be specified.
 * The mode controls which specialized sub-filter is to be changed.
 */
class ExportedByGUIDVPMInterfaces ENOVIAFilterer : public CATBaseUnknown 
{

/**
 * @nodoc
 */
  CATDeclareInterface;
  
 public:

/**
 * Saves the Current Filter.
 * <br><b>Role</b>: Filters can be saved in a stack, in order to temporarily change the value of the filter
 * without losing the value specified previously.
 * FilterType can take the value (#define) : FLT_ATTRIBUTE, FLT_DISCIPLINE, FLT_CONFIG,
 *                                          FLT_ZONE, FLT_VOLUME or other one or a | combination
 * FLT_XXX are defined in CATVpmTPInclude.h
 */
  virtual HRESULT SaveCurrentFilter()=0;

/**
 * Restores the Current Filter.
 */
  virtual HRESULT RestoreCurrentFilter()=0;

/**
 * Resets totally the generalized filter
 */
  virtual HRESULT ResetCurrentFilter()=0;


/**
 * Dumps the current filter. Debug purposes.
 */
  virtual HRESULT dump_CurrentFilter()=0;

/**
 * Turns the sub-filter of the given type ON or OFF.
 * <br><b>Role</b>: the sub-filter types that are not specified by the 'FilterType' argument are left UNCHANGED.
 * <p>Example:
 * put_GlobalFilterModeByType( FLT_ATTRIBUTE, TRUE )
 * -> turns the CONFIG part of the generalized filter ON, leaving the other sub-filter types unchanged.
 * put_GlobalFilterModeByType( FLT_ZONE, FALSE )
 * -> turns the CONFIG part of the generalized filter OFF, leaving the other sub-filter types unchanged.
 * @param FilterType
 *   Filter Type.
 * @param FilterActivated
 *   FilterActivated a boolean value.
 */
  virtual HRESULT put_GlobalFilterModeByType(long FilterType,
					     boolean FilterActivated)=0;

/**
 * Adds a sub-filter of a given type to the Generalized filter.
 * <br><b>Role</b>: The sub-filter types that are not specified by the 'FilterType' argument are left UNCHANGED.
 * <p>Example:
 * add_Filter( FLT_ATTRIBUTE, <attribute filter> )
 * -> adds a new component to the CONFIG part of the generalized filter.
 * @param FilterType
 *   Filter Type.
 * @param AttFilter
 *   Attrubute Filter.
 */
  virtual HRESULT add_Filter(long FilterType,
			     CATIVpmPredicate *AttFilter)=0;

  // Returns the number of elementary filters present for a given sub-filter type.
  // For exmaple, returns the number of elementary ATTRIBUTE filters that compose the ATTRIBUTE sub-filter
  // of the generalized filter.

/**
 * @nodoc
 */
  virtual HRESULT get_FilterCount( long FilterType, long & NbFilter)=0;

/**
 * @nodoc
 */
  virtual HRESULT get_Filter(long index,
			     long & FilterType,
			     CATIVpmPredicate *& AttFilter)=0;

  // Returns the CONCATENATION of elementary filters present for a given sub-filter type.
/**
 * @nodoc
 */
  virtual HRESULT get_GlobalFilterByType(long FilterType,
										 CATIVpmPredicate_var& Filter)=0;

  // Removes the index-th Generalized Filter present in the stack.
  // All the sub-filters of the generalized filter are removed at once.
  // Note: this is more than juut a deactivation, the filter is really removed !

/**
 * @nodoc
 */
  virtual HRESULT RemoveFilter(long index)=0;

  // Resets the current (ie. top of stack) generalized filter.
  // Here, ONLY the sub-filter of the given type is reset.
  // Example:    RemoveFilterByType( FLT_CONFIG )
/**
 * @nodoc
 */
  virtual HRESULT RemoveFilterByType(long FilterType)=0;


  // Selectively activates or de-activate a sub-filter of a given type.
  // Example: put_FilterMode( FLT_ALL, 1 )  -> Activates all sub-filters
  // Example: put_FilterMode( FLT_CONFIG, 0 )  -> De-activate the CONFIG sub-filter (and this one only)
/**
 * @nodoc
 */
  virtual HRESULT put_FilterMode(long index,
				 boolean FilterActivated)=0;

  // Returns a boolean that says whether a given sub-filter type is currently active or not.
/**
 * @nodoc
 */
  virtual HRESULT get_FilterMode(long index,
				 boolean& FilterActivated)=0;

  // Returns a boolean that says whether a given sub-filter type is currently active or not.
/**
 * @nodoc
 */
  virtual HRESULT get_GlobalFilterModeByType(long FilterType,
											 boolean& FilterActivated)=0;

  // Selectively activate or de-activate a given sub-filter in the Generalized Filter present 
  // at the index-th position in the stack.
  // Note: Here, ONLY the sub-filter of the given 'FilterType' in reset in the generalized filter.
  // Note2: this is not a removal, the filter stays in the stack.
/**
 * @nodoc
 */
  virtual HRESULT put_FilterModeByType(long FilterType,
				       boolean FilterActivated)=0;
/**
 * @nodoc
 */
  virtual HRESULT get_CurrentFilter(long FilterType,
				    CATIVpmPredicate *& Filter,
				    boolean iSearchOnParent=TRUE)=0;

  // Returns the (unique) parent of the current ENOVIAFilterer object (this).
  // See header.
/**
 * @nodoc
 */
  virtual HRESULT get_ParentFilterObject(ENOVIAFilterer *& ParentFilter)=0;


  // Main Filtering method.
  // Applies the Generalized Filter to the current ENOVIAFilterer object.
  // Computes the resulting number of filterable objects.
  // The method allows to filter only a given type of objects ('Entity' argument).
  // The method allows to combine the predefined Generalized Filter to one last-minute filter ('FilterToAdd').
/**
 * @nodoc
 */
  virtual HRESULT get_FilteredObject(const CATBSTR & Entity,
				       CATIVpmPredicate *FilterToAdd,
				       CATLISTV(CATBaseUnknown_var)& oList)=0;


  // Other Filtering method.
  // Applies the given filter ('FilterToApply') to the current ENOVIAFilterer object.
  // Note: Here, ONLY the given filter is taken into account. The Genelized filter is ignored !!!
  // Computes the resulting number of filterable objects.
/**
 * @nodoc
 */
  virtual HRESULT get_FilteredObjectByFilter(const CATBSTR & Entity,
						  CATIVpmPredicate *FilterToApply,
						  CATLISTV(CATBaseUnknown_var)& oList)=0;


  // Defines a Filter on Standard Parts.
  // if iMode=FALSE, get_FilteredObject/get_FilteredObjectByFilter will not give StandardParts.
  // iMode=TRUE is the default mode.
  // Note: an ItemInstance is a Standard Part if the V508_isStandardPart attribute of 
  // its PartMaster is equal to TRUE. 
/**
 * @nodoc
 */
  virtual HRESULT put_WithStandardPartMode(const boolean & iMode)=0;


  // Gets the WithStandardPart mode.
/**
 * @nodoc
 */
  virtual HRESULT get_WithStandardPartMode(boolean & oMode)=0;


/**
 * @nodoc
 */
  virtual HRESULT ResetVersionDate()=0;

/**
 * @nodoc
 */
  virtual HRESULT put_VersionDate(const CATTime & iDate)=0;

/**
 * @nodoc
 */
  virtual HRESULT get_VersionDate(CATTime & oDate)=0;


};

/**
 * @nodoc
 */
CATDeclareHandler(ENOVIAFilterer, CATBaseUnknown);
#endif
