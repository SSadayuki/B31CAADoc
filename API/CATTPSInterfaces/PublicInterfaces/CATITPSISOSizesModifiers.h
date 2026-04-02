#ifndef CATITPSISOSizesModifiers_H
#define CATITPSISOSizesModifiers_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

class CATICKeParm_var;
class CATListValCATBaseUnknown_var;

extern "C" const IID IID_CATITPSISOSizesModifiers;

/**
 * This interface is implemented by FTA Semantic Dimension entities.
 * Interface to manage linear and angular sizes ISO modifiers as per repectively ISO 14405-1:2016 and ISO 14405-3:2016.
 *<br /> Interface meaningful for ISO Standard only (up from 14405 revision).
 */
class  CATITPSISOSizesModifiers : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Enum to indicate limit bound to consider.
  * @param Upper  
  *   Upper Limit of Size, ULS.
  * @param Lower  
  *   Lower Limit of Size, LLS.
  */
  enum LimitOfSizeBound
  {
    Upper,
    Lower
  };

  /**
  * Enum to indicate within complex modifier expression, position of the modifier to consider.
  * @param FirstPosition  
  *   First modifier.
  * @param SecondPosition  
  *   Second modifier.
  *   <em>Note:<em/> when /Lenght or /Angle modfier is used, parameter for relimitation is available
  *   thanks to @href GetRestrictedPortionDefinition or @href SetRestrictedPortionDefinition
  * @param LastPosition  
  *   Third, and at most, last position in complex expression.
  */
  enum LocationInExpression
  {
    FirstPosition,
    SecondPosition,
    LastPosition
  };

    /**
     * Checks if size operators are inherited form the default specification applied onto the annotation set.
     * @see CATITPSSetISODefaultSpecifications
     *  @param oApplicationFlag
     *     TRUE is stating that Annotation Set Specifications are inherited.
     *<br />     FALSE at the opposition reveals a special modifiers application; @href GetSpecialModifier
     *   allows to parse such situation.
     */
    virtual HRESULT IsDefaultApplied ( CATBoolean & oApplicationFlag ) const = 0;

    /**
     * Sets modifiers specification to the default defined onto the Annotation Set, or conversely activates
     * modifiers local overloading by locally defined specifications.
     *<br /> When activating special modifiers specification, content is initialized with respect to the
     * default specification defined onto the Annotation Set.
     *  @param iApplicationFlag
     *     TRUE is given to align annotation with Annotation Set default specification.
     *<br />     FALSE is enabling to define modifiers managed directly onto the underlying dimension;
     *   @href SetSpecialModifier allows to assign the expected combination of modifiers.
     *  @param ipSwithOnSCS
     *     Optional argument: allows when used in conjunction with Annotation Set inherited specifications
     *     to either (when TRUE) activate or remove (when FALSE) capability to define cross section specifications.
     */
    virtual HRESULT SetDefault( const CATBoolean iApplicationFlag, const CATBoolean * ipSwithOnSCS = NULL ) = 0;

    /**
     * Reads size modifier at given location.
     *  @param iIndexInSentence
     *     Indicates the position in the possibly complex modifier expression of the modifier to look for.
     *  @param oModifierValue
     *     Value of the applied modifier; integer value should be "cast" towards the accurate enumerated
     *     value according to the type, linear or angular, of the dimension; uses repectively @href CATTPSLinearSizeOperatorISO
     *     or @href CATTPSAngularSizeOperatorISO.
     *  @param iLimit
     *     Optional argument to precise the limit to consider, either ULS or LLS.
     */
    virtual HRESULT GetSpecialModifier( LocationInExpression iIndexInSentence, int * oModifierValue, LimitOfSizeBound iLimit = Upper ) const = 0;

    /**
    * Sets size modifier at given location.
    *  @param iIndexInSentence
    *     Indicates the position in the possibly complex modifier expression of the modifier to modify.
    *  @param iModifierValue
    *     Modifier new value; integer value is resulting from a "cast" towards the accurate enumerated
    *     value according to the type, linear or angular, of the dimension; uses repectively @href CATTPSLinearSizeOperatorISO
    *     or @href CATTPSAngularSizeOperatorISO.
    *  @param iLimit
    *     Optional argument to precise the limit to consider, either ULS or LLS.
    */
    virtual HRESULT SetSpecialModifier( LocationInExpression iIndexInSentence, const int iModifierValue, LimitOfSizeBound iLimit = Upper ) = 0;

    /**
     * Retrieves the relimitation definition using a knowledge parameter; parameter magnitude is either length for linear size
     * or angle for angular dimension.
     *  @param ospCrossSectionSpan
     *     Value of the restriction useful as soon as \Length or \Angle modifier is applied.
     */
    virtual HRESULT GetRestrictedPortionDefinition ( CATICKeParm_var & ospCrossSectionSpan ) const = 0;

    /**
     * Sets the relimitation definition using a knowledge parameter; parameter magnitude has to conform to the type of the
     * underlying dimension; either length for linear size or angle for angular dimension.
     *  @param ispCrossSectionSpan
     *     Value of the restriction to define \Length or \Angle section span.
     */
    virtual HRESULT SetRestrictedPortionDefinition ( CATICKeParm_var & ispCrossSectionSpan ) = 0;

    /**
     * Retrieves the list of restricted areas complementing definition of an SCS modifier.
     *  @param ospRestrictedAreaList
     *     List or restricted area; caller has to refere to @href CATITPSRestrictedArea.
     */
    virtual HRESULT GetSCSRestrictedArea ( CATListValCATBaseUnknown_var & ospRestrictedAreaList ) const = 0;

    /**
     * Assigns the list of restricted areas complementing definition of an SCS modifier.
     *  @param ispRestrictedAreaList
     *     List or restricted area; caller has to refere to @href CATITPSRestrictedArea.
     */
    virtual HRESULT GetSCSRestrictedArea ( CATListValCATBaseUnknown_var & ispRestrictedAreaList ) = 0;
};

CATDeclareHandler(CATITPSISOSizesModifiers, CATBaseUnknown);

#endif
