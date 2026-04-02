#ifndef CATIMechanicalRootFactory_h
#define CATIMechanicalRootFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATIMechanicalTool.h"
#include "CATIPrtPart.h"
//#include "CATIProduct.h" 
#include "MecModItfCPP.h"
#include "CATBoolean.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMechanicalRootFactory;
#else
extern "C" const IID IID_CATIMechanicalRootFactory;
#endif


/**
 * Interface to create mechanical bodies.
 * <b>Role</b>:This interface enables you to create MechanicalTool and 
 * GSMTool features, both are mechanical features included into a Part document.
 * <ul>
 * <li>The <b>MechanicalTool</b> feature</li>
 * <p>It is a solid body which is always aggregated by the MechanicalPart feature 
 * (@href CATIPrtPart ). The "<tt>PartBody</tt>" and all the "<tt>Body</tt>" in the specification tree 
 *  are MechanicalTool features. The two @href #CreatePRTTool methods enable you to create 
 *  a MechanicalTool feature.</p>
 * <li>The <b>GSMTool</b> feature </li>
 * <p>It is a surfacic body. Since V5R13, there are two types of GSMTool:</p>
 *  <ul>
 *    <li><b>Geometrical Set</b>, the previous Open_Body</li>
 *     <p>Such a surfacic body can be aggregated by the MechanicalPart feature, 
 *      a MechanicalTool feature, and a Geometrical Set feature. The @href CATIGSMTool#GetType 
 *      method returns <tt>0</tt>. The @href #CreateGeometricalSet method enables you to create 
 *  a Geometrical Set feature.</p>
 *    <li><b>Ordered Geometrical Set</b>, a V5R13 novelty </li>
 *     <p>Such a surfacic body can be aggregated by the MechanicalPart feature, 
 *      and  only an Ordered Geometrical Set feature. The @href CATIGSMTool#GetType 
 *      method returns <tt>1</tt>. The @href #CreateOrderedGeometricalSet method enables you to create 
 *  an Ordered Geometrical Set feature.</p>
 *     <p></p>
 *   </ul>
 * </ul>
 * Any method that tries to create a body disrespecting aggregation rules or the private status of the destination body will throw an exception.
 * For example creating a MechanicalTool inside a MechanicalTool is not allowed. Likewise, creating a GSMTool inside a private
 * GSMTool is not allowed. Refer to @href CATIGSMTool#SetPrivate or @href CATIGSMTool#IsPrivate methods.<br> <br>
 * This interface is implemented by the specification container of the Part Document 
 * that you retrieve by two means:
 * <ul>
 * <li>@href CATIContainerOfDocument#GetSpecContainer </li>
 * <li>@href CATInit#GetRootContainer </li>
 * </ul>
 */
class ExportedByMecModItfCPP CATIMechanicalRootFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

/**
 * @nodoc.
 */ 
   virtual CATIMechanicalTool_var CreateMechanicalTool(const CATUnicodeString& UserName ) = 0;

/**
 * @nodoc. 
 */ 
   virtual CATIPrtPart_var CreateMechanicalPart(const CATUnicodeString& UserName = NULL_string,
                                                CATBoolean TestExistence = TRUE) = 0;
												
/**
 * Creates a MechanicalTool.
 * <br><b>Role:</b>This method creates a MechanicalTool feature at the last 
 * position inside the MechanicalPart feature (iDestination).
 * @param iUserName
 *  The user name of the MechanicalTool to be created.   If the string is empty, the name 
 *  will be automatically computed. It is the concatenation of the NLS name of the 
 * MechanicalTool feature and a number.
 * @param iDestination
 *  The unique possibility is the MechanicalPart feature of the Part Document. 
 *  You retrieve this feature by 
 * using  the @href CATIPrtContainer#GetPart method.
 * @return
 *  The created MechanicalTool .
 */ 
   virtual CATISpecObject_var CreatePRTTool(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination) = 0 ;

/**
 * Creates a MechanicalTool at a given position.
 * <br><b>Role:</b>This method creates a MechanicalTool feature at a given 
 * position inside the MechanicalPart feature (iDestination). 
 * @param iUserName
 *  The user name of the MechanicalTool created. If the string is empty, the name 
 *  will be automatically computed. It is the concatenation of the NLS name of the 
 * MechanicalTool feature and a number.
 *  
 * @param iDestination
 *  The unique possibility is the MechanicalPart feature of the Part Document. 
 *  You retrieve this feature by 
 *  using  the @href CATIPrtContainer#GetPart method.
 * @param iPosition
 *   The position inside iDestination:
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li><b>n = 0</b>: the MechanicalTool is created at the last position </li>
 *   <li><b>n > 0</b> or <b>n <= iDestination size</b>: the position of the MechanicalTool is equal to n+1 </li>
 *   <li>Otherwise: the MechanicalTool is not created</li>
 *   </ul>
 * @return
 *  The created MechanicalTool.
 */ 
   virtual CATISpecObject_var CreatePRTTool(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination, 
                                            int iPosition ) = 0 ;

/**
 * @nodoc
 * Use CreateGeometricalSet. 
 * Creates a GSMTool.
 * <br><b>Role:</b>This method creates a GSMTool feature. The position of this new feature
 * depends on the iDestination parameter:
 * <ul>
 * <li>It is the MechanicalPart feature</li>
 * <br>The new GSMTool feature is set at the last position inside the MechanicalPart feature
 * <li>It is a GSMTool or a MechanicalTool feature</li>
 * <br>The new GSMTool feature is set after this feature. iDestination and the new feature have
 * the same father.
 * </ul>
 * @param iUserName
 *  The user name of the GSMTool feature to be created.
 * @param iDestination
 * It can be:
 * <ul>
 * <li>The MechanicalPart feature. You retrieve this feature by 
 *  using  the @href CATIPrtContainer#GetPart method.</li>
 * <li>a GSMTool feature</li>
 * <li>a MechanicalTool feature</li>
 * </ul>
 * @return
 *  The created GSMTool .
 */ 
   virtual CATISpecObject_var CreateGSMTool(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination) = 0 ; 


/**
 * @nodoc
 * Use CreateGeometricalSet. 
 * Creates a GSMTool at a given position.
 * <br><b>Role:</b>This method creates a GSMTool feature inside iDestination at the given position.
 * @param iUserName
 *  The user name of the GSMTool created.
 * @param iDestination
 *  The feature in which the returned GSMTool is created.It can be:
 * <ul>
 * <li>The MechanicalPart feature. You retrieve this feature by 
 *  using  the @href CATIPrtContainer#GetPart method.</li>
 * <li>a GSMTool feature</li>
 * <li>a MechanicalTool feature</li>
 * </ul>
 * @param iPosition
 *   The position inside iDestination:
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li><b>n = 0</b>: the GSMTool is created at the last position </li>
 *   <li><b>n > 0</b> or <b>n <= iDestination size</b>: the position of the GSMTool is equal to n+1 </li>
 *   <li>Otherwise: the GSMTool is not created</li>
 *   </ul>
 * @return
 *  The created GSMTool .
 */ 
   virtual CATISpecObject_var CreateGSMTool(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination,
                                            int iPosition) = 0 ;
   
/**
 * @nodoc
 */
   virtual HRESULT CreateToolBox(const CATUnicodeString& iUserName,
                                 const CATISpecObject_var& ToolBox_father,
                                 CATISpecObject_var& ToolBox) = 0;


/**
 * Creates a Geometrical Set.
 * <br><b>Role:</b>This method creates a Geometrical Set feature. It implements the
 * @href CATIMmiNonOrderedGeometricalSet interface.
 * @param iUserName
 *  The user name of the created Geometrical Set. If the string is empty, the name 
 *  will be automatically computed. It is the concatenation of the NLS name of the 
 * Geometrical Set feature and a number.
 * @param iDestination
 * Depending on the <tt>iPosition</tt> value, <tt>iDestination</tt> can be either the 
 *  feature aggregating the new Geometrical Set or the feature just before the new
 * Geometrical Set.
 * <ul>
 * <li>If <tt>iDestination</tt> is an aggregating feature, it can be</li>
 * <ul>
 * <li>The MechanicalPart feature. You retrieve this feature by 
 * using  the @href CATIPrtContainer#GetPart method.</li>
 * <li>A Geometrical Set feature</li>
 * <li>A MechanicalTool feature</li>
 * </ul>
 * <li>If <tt>iDestination</tt> represents the feature just before the new Geometrical Set,
 * it can be any Mechanical feature (except the MechanicalPart)</li>
 * </ul>
 * @param oGeomSet
 *  The created Geometrical Set.
 * @param iPosition
 *   The position of the new Geometrical Set into the aggregating feature.
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li><b><tt>iPosition</tt> = -1 </b>(the default value)
 *   <p></p>
 *     <ul>
 *        <li>If <tt>iDestination</tt> is the MechanicalPart feature</li>
 *         <p>The new Geometrical Set feature is set at the last position inside the
 *            MechanicalPart feature</p>
 *      <li>If <tt>iDestination</tt> is a Geometrical Set or a MechanicalTool feature</li>
 *         <p>The new Geometrical Set feature is set after this feature. 
 *             <tt>iDestination</tt> and the new feature have the same father </p>             
 *     </ul>
 *   <li><b> 0 <= <tt>iPosition</tt><= <tt>iDestination</tt> size</b></li>
 *   <p>The new Geometrical Set is created into <tt>iDestination</tt>:</p> 
 *   <ul>
 *   <li><b><tt>iPosition</tt> = 0</b>: At the last position inside <tt>iDestination</tt></li>
 *   <li><b>Otherwise</b>: 
 *       At the <tt>iPosition</tt>+1 position inside <tt>iDestination</tt></li>
 *                 
 *    <p></p>
 *    </ul>
 *   <li><b>Otherwise</b>: the Geometrical Set is not created</li>
 *   </ul>
 *
 */ 
   virtual HRESULT CreateGeometricalSet(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination,
                                            CATISpecObject_var  & oGeomSet,
                                            int iPosition=-1 ) = 0 ;

 /**
 * Creates an Ordered Geometrical Set.
 * <br><b>Role:</b>This method creates an Ordered Geometrical Set feature. It implements the
 * @href CATIMmiOrderedGeometricalSet interface.
 * @param iUserName
 *  The user name of the created Ordered Geometrical Set. If the string is empty, the name 
 *  will be automatically computed. It is the concatenation of the NLS name of the 
 * Ordered Geometrical Set feature and a number.
 * @param iDestination
 * Depending on the <tt>iPosition</tt> value, <tt>iDestination</tt> can be either the 
 *  feature aggregating the new Ordered Geometrical Set or the feature just before the new
 * Ordered Geometrical Set.
 * <ul>
 * <li>If <tt>iDestination</tt> is an aggregating feature, it can be</li>
 * <ul>
 * <li>The MechanicalPart feature. You retrieve this feature by 
 * using  the @href CATIPrtContainer#GetPart method.</li>
 * <li>An Ordered Geometrical Set feature</li>
 * </ul>
 * <li>If <tt>iDestination</tt> represents the feature just before the new Ordered Geometrical Set,
 * it can be any Mechanical feature (except the MechanicalPart)</li>
 * </ul>
 * @param oOrderedGeomSet
 *  The created Ordered Geometrical Set.
 * @param iPosition
 *   The position of the new Ordered Geometrical Set into the aggregating feature.
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li><b><tt>iPosition</tt> = -1 </b>(the default value)
 *   <p></p>
 *     <ul>
 *        <li>If <tt>iDestination</tt> is the MechanicalPart feature</li>
 *         <p>The new Ordered Geometrical Set feature is set at the last position inside the
 *            MechanicalPart feature</p>
 *      <li>If <tt>iDestination</tt> is an Ordered Geometrical Set</li>
 *         <p>The new Ordered Geometrical Set feature is set after this feature. 
 *             <tt>iDestination</tt> and the new feature have the same father </p>             
 *     </ul>
 *   <li><b> 0 <= <tt>iPosition</tt><= <tt>iDestination</tt> size</b></li>
 *   <p>The new Ordered Geometrical Set is created into <tt>iDestination</tt>:</p> 
 *   <ul>
 *   <li><b><tt>iPosition</tt> = 0</b>: At the last position inside <tt>iDestination</tt></li>
 *   <li><b>Otherwise</b>: 
 *       At the <tt>iPosition</tt>+1 position inside <tt>iDestination</tt></li>
 *                 
 *    <p></p>
 *    </ul>
 *   <li><b>Otherwise</b>: the Ordered Geometrical Set is not created</li>
 *   </ul>
 */ 
   virtual HRESULT CreateOrderedGeometricalSet(const CATUnicodeString& iUserName, 
                                            const CATISpecObject_var& iDestination,
                                            CATISpecObject_var & oOrderedGeomSet,
                                            int iPosition=-1 ) = 0 ;
   
};

CATDeclareHandler(CATIMechanicalRootFactory, CATBaseUnknown);

#endif


