#ifndef CATICkeRelationForwards_h
#define CATICkeRelationForwards_h

// COPYRIGHT DASSAULT SYSTEMES 1998
   
/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// module definition
#include "KnowledgeItfCPP.h"

// forwards declaration
class CATICkeRelation_var;
class CATICkeRelationExp_var;
class CATICkeParm_var;
class CATICkeParmFactory_var;
class CATICkeUnit_var;
class CATICkeMKSUnit_var;
class CATICkeMagnitude_var;
class CATIParmManipulator_var;
class CATIParmFormat_var;
class CATICkeNaming_var;
class CATICkeExpression_var;
class CATIDesignTable_var;
class CATICkeSheet_var;




/**
 * Possible values for defining panel ParamFrame.
 * <br><b>Legal values</b>:
 * <tt>CATCkeLabel</tt> default style: with a label.
 * <tt>CATCkeNoLabel</tt> no label
 * <tt>CATCkeNoFormula</tt> if you do not want formulas in contextual menu.
 * <tt>CATCkeWithSpinner</tt> if you wish a spinner instead of an editor
 * <tt>CATCkeNoTolerance</tt> if you do not want tolerance
 * <tt>CATCkeNoRange</tt> if you do not want ranges
 * <tt>CATCkeNoCxtMenu</tt> if you do not want contextual menus at all
 * <tt>CATCkeNoCtxMenuEdit</tt> if you do not want the "Edit..." contextual menu
 * <tt>CATCkeNoCxtMenuMultipleValues</tt> if you do not want the "Multiple Values" contextual menu
 * <tt>CATCkeNoJournaling</tt> if you do not want journaling of parameter modification
 * <tt>CATCkeRightAttachment</tt> if you want a right attachement
 * <tt>CATCkeNoMeasure</tt> if you don't want the Measure contextual menu
 * <tt>CATCkeDTConfigFirstOutParameter</tt> when editing a design table configuration, shows the first associated parameter
 * <tt>CATCkeRelationButtonDisabled</tt> if the parameter has a relation, the button appears but is disabled
 * <tt>CATCkeEditMultipleForVolatile</tt> if a contextual menu for editing multiple values for volatile parameters is required
 * <tt>CATCkeKeepCxtMenuWhenDisable</tt> if you want to keep the contextual menu even when the ParamFrame is disable
 * <tt>CATCkeWithUnsetMenu</tt> if you want,in contextual menu, the capability to unset the parameter value.
 */
typedef unsigned long CATCkeFrameStyle;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeLabel;         
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoLabel;      
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoFormula;     
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeWithSpinner;  
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoRename;      
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeLiteralShared; 
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoTolerance;   
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoRange;      
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoCxtMenu;     
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoCxtMenuEdit;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoCxtMenuMultipleValues;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoJournaling;  
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeRightAttachment; 
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoMeasure;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeDTConfigFirstOutParameter;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeRelationButtonDisabled;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeNoBitmap;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeEditMultipleForVolatile;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeKeepCxtMenuWhenDisable;
extern ExportedByKnowledgeItfCPP const CATCkeFrameStyle  CATCkeWithUnsetMenu;


// listes
#include "CATICkeForwards.h"

/** 
 * List of relations. 
 */
typedef class CATLISTV(CATBaseUnknown_var)* CATCkeListOfRelation;

/** 
 * List of parameters. 
 */
typedef class CATLISTV(CATBaseUnknown_var)* CATCkeListOfParm;

/** 
 * List of units. 
 */
typedef class CATLISTV(CATBaseUnknown_var)* CATCkeListOfUnit;

/** 
 * List of magnitudes.
 */
typedef class CATLISTV(CATBaseUnknown_var)* CATCkeListOfMagnitude;



#endif

