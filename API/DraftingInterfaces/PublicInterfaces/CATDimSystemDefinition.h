//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//===================================================================
#ifndef CATDimSystemDefinition_H
#define CATDimSystemDefinition_H

/**
* @CAA2Level L1
* @CAA2Usage U1
*/


#include"CATErrorDef.h"
#include"CATBooleanDef.h"
#include"CATDrwDimSystemType.h"
#include"CATDrwSystOffsetMode.h"
#include"CATDrwSystValueAlignment.h"
#include"DraftingItfCPP.h"

/** 
* Class to initialize basic informations necessary to the dimension system creation.
* To create a dimension system see @href CATIDrwAnnotationFactory#CreateDimSystem .
*/

class ExportedByDraftingItfCPP CATDimSystemDefinition 
{
public:
   /**
   *  Constructor operator.
   */
   CATDimSystemDefinition();
   /**
   *  Copy Constructor operator.
   */
   CATDimSystemDefinition(const CATDimSystemDefinition&);
   /**
   *  Destructor operator.
   */
   ~CATDimSystemDefinition();

   /**
   *  Assignment operator.
   *  <br><b>Role</b>: Assignment operator.
   */
   CATDimSystemDefinition& operator = (const CATDimSystemDefinition&);

   /**
   *  Dimensions system type.
   *  <br><b>Role</b>: Define the type of the dimensions system.
   * @param SystemType
   *  @see CATDrwDimSystemType
   */
   CATDrwDimSystemType SystemType;

   /**
   * Sets the offset mode.  
   * <br><b>Precondition</b> Stacked dimension system only.
   * <br><b>Role</b>: To define the offset mode to apply to dimension lines line-up.
   *  @see CATDrwSystOffsetMode
   */
   HRESULT SetOffsetMode(const CATDrwSystOffsetMode iOffsetMode);
   /**
   * Gets the offset mode.  
   * <br><b>Role</b>: To retrieve the offset mode to apply to dimension lines line-up.
   *  @see CATDrwSystOffsetMode
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_FALSE : Method correctly executed.
   * <br>The returned value is the default value initialized by the constructor. this value was not overloaded..
   */
   const HRESULT GetOffsetMode(CATDrwSystOffsetMode& oOffsetMode);

   /**
   *  Sets offset between dimension lines.
   *  <br><b>Precondition</b> Available if OffsetMode is set to constant.
   *  <br><b>Role</b>: to define the eventual offset between dimension lines
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>E_FAIL : Value out of range.
   */
   HRESULT SetValueOffset(const double iValueOffset);
   /**
   *  Gets offset between dimension lines.
   *  <br><b>Role</b>: to retrieve the eventual offset between dimension lines
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_FALSE : Method correctly executed.
   * <br>The returned value is the default value initialized by the constructor. this value was not overloaded..
   */
   const HRESULT GetValueOffset(double& oValueOffset);

   /**
   * Sets the value alignment mode.
   *  <br><b>Precondition</b> Stacked dimension system only.
   *  <br><b>Role</b>: To define the alignment mode to apply to dimension value.
   *  @see CATDrwSystOffsetMode
   */
   HRESULT SetValueAlignmentMode(const CATDrwSystValueAlignment iAlignmentMode);
   /**
   * Gets the value alignment mode.
   *  <br><b>Role</b>: To retrieve the alignment mode to apply to dimension value.
   *  @see CATDrwSystOffsetMode
   */
   const HRESULT GetValueAlignmentMode(CATDrwSystValueAlignment& oAlignmentMode);

   /**
   *  Sets offset to assign to dimension values.
   *  <br><b>Precondition</b> Available only if OffsetMode is set to OnRefLineSide or OppToRefLineSide
   *  <br><b>Role</b>: to define the offset of dimension values
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>E_FAIL : Value out of range.
   */
   HRESULT SetValueAlignmentOffset(const double iValueAlignment);
   /**
   *  Gets offset to assign to dimension values.
   *  <br><b>Role</b>: to retrieve the offset of dimension values
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_FALSE : Method correctly executed.
   * <br>The returned value is the default value initialized by the constructor. this value was not overloaded..
   */
   const HRESULT GetValueAlignmentOffset(double& oValueAlignment);

   /**
   *  Manages the automatically funnel mode.
   *  <br><b>Role</b>: If this mode is activated, a funnel will be automatically added when dimension value
   *  is too large to be contained between extension lines
   */
   HRESULT SetAutoFunnelMode(const CATBoolean iAutoFunnel);
   /**
   *  Gets the automatically funnel mode.
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_FALSE : Method correctly executed.
   * <br>The returned value is the default value initialized by the constructor. this value was not overloaded..
   */
   const HRESULT GetAutoFunnelMode(CATBoolean& oAutoFunnel);

private:

   CATDrwSystOffsetMode _OffsetMode;
   double _Offset;
   CATDrwSystValueAlignment _ValueAlignmentMode;
   double _ValueAlignmentOffset;
   CATBoolean _AutoFunnel;

   CATBoolean _OffsetModeDefined;
   CATBoolean _OffsetDefined;
   CATBoolean _ValueAlignmentModeDefined;
   CATBoolean _ValueAlignmentOffsetDefined;
   CATBoolean _AutoFunnelDefined;
};


# endif
