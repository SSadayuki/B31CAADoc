// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <CATCmdContainer.h>
#include <CATCmdSeparator.h>
#include <CATCmdStarter.h>
#include <CATCmdWorkshop.h>
#include <CATCmdWorkbench.h>
#include <CATFrmPalette.h>

/**
 * Creates an access.
 * <b>Role</b>: The workshop (or workbench) is a bag of accesses and this macro allows you
 * to create one access. To build your workshop (or workbench) you must chain accesses  
 * with the @href SetAccessChild or  @href SetAccessNext macro. If you want to display an 
 * access just before a given one, you can use the @href SetAccessAnchorName macro.
 * @param classname 
 *   The name of the class created 
 *   <b><Legal values></b>: 
 *   <dl>
 *   <dt><tt>CATCmdContainer</tt> 
 *   <ul>
 *   <li> To create a <b>menubar</b>. Then use the macro @href SetWorkshopMenu (or @href SetWorkbenchMenu )
 *   to attach the menubar to the workshop (or to the workbench).</li>
 *   <li> To create a <b>menu</b>. </li>
 *   <li> To create a <b>sub menu</b>. </li>
 *   <li> To create an <b>icon box</b>. </li>
 *   <li> To create a <b>toolbar</b>. Then use the @href AddToolbarView macro to declare the new toolbar.</li>
 *   </ul>
 *   <dt><tt>CATCmdWorkshop</tt>
 *   <dd> To create a <b>workshop</b>. It's the return value of the @href CATIWorkshop#CreateWorkshop method
 *   <dt><tt>CATCmdWorkbench</tt>
 *   <dd> To create a <b>workbench</b>. It's the return value of the @href CATIWorkbench#CreateWorkbench method
 *   <dt><tt>CATCmdStarter</tt>
 *   <dd> To create a <b>starter</b>. Then to attach a command header to this starter use 
 *        the @href SetAccessCommand macro
 *   <dt><tt>CATCmdSeparator</tt>
 *   <dd> To create a <b>separator</b> between accesses.
 *   </dl>
 * @param variableName
 *   The pointer to the instance created 
 * @param objectName
 *   The name of the access. This name is used to reference resources except for a CATCmdStarter 
 *   or a CATCmdSeparator. 
 */
#define NewAccess(className, variableName, objectName) \
className * variableName = new className (#objectName, CATCmdAccess::Default)

/**
 * Adds a toolbar into the workshop or into the workbench.
 * @param variableName 
 *   The pointer to the toolbar's instance created by @href NewAccess with 
 *   <tt>CATCmdContainer</tt> as <tt>classname</tt> parameter.
 * @param visibility
 *   The toolbar visibility. 
 * <br><b>Legal values</b>: 1: visible , -1:invisible  
 * @param position
 *   The toolbar's position in the frame.
 * <br><b>Legal values</b>: 
 * <dl>
 * <dt><tt>UnDock</tt>: 
 * <dd>The toolbar is undocked. 
 * <dt><tt>Bottom</tt>: 
 * <dd>The toolbar is docked at the bottom of the application window 
 * <dt><tt>Top</tt>:
 * <dd>The toolbar is docked at the top of the application window
 * <dt><tt>Left</tt>:
 * <dd>The toolbar is docked at the left of the application window
 * <dt><tt>Right</tt>: 
 * <dd>The toolbar is docked at the right of the application window
 * </dl>
 */
#define AddToolbarView(variableName, visibility, position) \
variableName -> AddView(visibility, CATCmdContainer::position)

/**
 * @nodoc
 */
#define SetAccessIconName(variableName, icon) \
variableName -> SetIconName(icon)

/**
 * @nodoc
 */
#define SetAccessTitle(variableName, title) \
variableName -> SetTitle(title)

/**
 * @nodoc
 */
#define SetAccessCustomerName(variableName, customerName) \
variableName -> SetCustomerName(customerName)

/**
 * Chains an access to a previous one in a container.
 * <b>Role</b>: Container's accesses are chained. The first access 
 * is attached to its container by the @href SetAccessChild macro. To chain accesses
 * you use this macro.
 * @param variableName 
 *   The pointer to an access instance already chained by a <tt>SetAccessNext</tt> or 
 *   <tt>SetAccessChild</tt> macro.
 * @param nextName
 *   The pointer to the access instance which follows <tt>variableName</tt>
 */
#define SetAccessNext(variableName, nextName) \
variableName -> SetNext(nextName)

/**
 * Declares the first access of a container.
 * <b>Role</b>: Container's accesses are chained. The first access 
 * is attached to its container by this macro. To chain accesses you use 
 * the @href SetAccessNext macro.
 * @param variableName 
 *   The pointer to the container's instance. This pointer is created by @href NewAccess whose
 *   <tt>classname</tt> parameter can be:
 *   <dl>
 *   <dt><tt>CATCmdContainer</tt>
 *   <dd>The container is a toolbar. <tt>childName</tt> is the first access of the toolbar 
 *   <dt><tt>CATCmdContainer</tt>
 *   <dd>The container is a menubar. <tt>childName</tt> is the first menu of the menubar
 *   <dt><tt>CATCmdWorkshop</tt>
 *   <dd>The container is a workshop. <tt>childName</tt> is the first toolbar of the workshop
 *   <dt><tt>CATCmdWorkbench</tt> 
 *   <dd>The container is a workbench. <tt>childName</tt> is the first toolbar of the workbench
 * </dl>
 * @param childName
 *   The pointer to the first access instance 
 * 
 */
#define SetAccessChild(variableName, childName) \
variableName -> SetChild(childName)

/**
 * Declares an access to add in a container.
 * <b>Role</b>: Container's accesses are chained. The access 
 * is attached to its container by this macro at the end 
 * of the container's children list. To chain accesses  you use 
 * the @href SetAccessNext macro.
 * If an access with the same name already exists in the container,
 * it is replaced by the given access.
 * @param variableName 
 *   The pointer to the container's instance. This pointer is created by @href NewAccess whose
 *   <tt>classname</tt> parameter can be:
 *   <dl>
 *   <dt><tt>CATCmdContainer</tt>
 *   <dd>The container is a toolbar. <tt>childName</tt> is the last access of the toolbar 
 *   <dt><tt>CATCmdContainer</tt>
 *   <dd>The container is a menubar. <tt>childName</tt> is the last menu of the menubar
 *   <dt><tt>CATCmdWorkshop</tt>
 *   <dd>The container is a workshop. <tt>childName</tt> is the last toolbar of the workshop
 *   <dt><tt>CATCmdWorkbench</tt> 
 *   <dd>The container is a workbench. <tt>childName</tt> is the last toolbar of the workbench
 * </dl>
 * @param childName
 *   The pointer to the last access instance 
 * 
 */
#define AddAccessChild(variableName, childName) \
variableName -> AddChild(childName)

/**
 * Attaches a command header to a starter.
 * @param variableName 
 *   The pointer to a CATCmdStarter's instance. This pointer is created by @href NewAccess 
 *   with <tt>CATCmdStarter<tt> as <tt>classname</tt> parameter.
 * @param command
 *   The identifier (a CATString) of a @href CATCommandHeader instance.
 *   <pre>
 *   Example:
 *      NewAccess(CATCmdStarter,pMyAccess,"accessname")
 *      SetAccessCommand(pMyAccess,"MyCommandHeaderId") 
 *   </pre>
 */
#define SetAccessCommand(variableName, command) \
variableName -> SetCommand(command)

/**
 * @nodoc
 */
#define SetAccessMnemonic(variableName, mnemonic) \
variableName -> SetMnemonic(mnemonic)

/**
 * Anchors an access before a given access.
 * @param variableName 
 *   The pointer to the access to be anchored
 * @param anchor
 *   The name of the access before which <tt>variableName</tt> is anchored
 *   <pre>
 *   Example: 
 *
 *   In a workshop you write :
 *      NewAccess(CATCmdStarter,pMyAccess1,"accessname1")
 *   
 *   In a workbench you have:
 *      NewAccess(CATCmdStarter,pMyAccess2,"accessname2")
 *      SetAccessAnchorName(pMyAccess2,"accessname1") 
 *
 *      The access whose pointer is pMyAccess2 is anchored before the 
 *      access whose name is accessname1. 
 *   </pre>
 */
#define SetAccessAnchorName(variableName, anchor) \
variableName -> SetAnchorName(anchor)

/**
 * @nodoc
 */
#define SetWorkbenchPriority(variableName, priority) \
variableName -> SetPriority(priority)

/**
 * @nodoc : deprecated V5R18
 * <br>Does nothing. To remove a workbench from the Start menu, set its Transient resource to TRUE.
 */
#define SetWorkbenchTransient(variableName, transient) \
variableName -> SetTransient (transient)

/**
 * Sets the toolbar style for the workbench.
 * @param variableName 
 *   The pointer to the workbench's instance. This pointer is created by @href NewAccess with
 *   <tt>CATCmdWorkbench</tt> as <tt>classname</tt> parameter.
 * @param style
 *   enum : Icon for toolbars to show icons
 *          Text for toolbars to show text only.
 */
#define SetWorkbenchToolbarStyle(variableName, style) \
variableName -> SetToolbarStyle (style)

/**
 * Sets the toolbars exclusive for the workbench. The Global toolbars will not appear.
 * @param variableName 
 *   The pointer to the workbench's instance. This pointer is created by @href NewAccess with
 *   <tt>CATCmdWorkbench</tt> as <tt>classname</tt> parameter.
 */
#define SetWorkbenchToolbarsExclusive(variableName) \
variableName -> SetToolbarsExclusive ()

/**
 * Merges the addin's menubar with the workbench's menubar.
 * @param variableName 
 *   The pointer to the addin's instance. This pointer is created by @href NewAccess with
 *   <tt>CATCmdContainer</tt> as <tt>classname</tt> parameter.
 * @param menu
 *   The pointer to the menu's instance created by @href NewAccess with 
 *   <tt>CATCmdContainer<tt> as <tt>classname</tt> 
 */
#define SetAddinMenu(variableName, menu) \
variableName -> SetMenu(menu);

/**
 * Merges the workbench's menubar with the workshop's menubar.
 * @param variableName 
 *   The pointer to the workbench's instance. This pointer is created by @href NewAccess with
 *   <tt>CATCmdWorkbench</tt> as <tt>classname</tt> parameter.
 * @param menu
 *   The pointer to the menu's instance created by @href NewAccess with 
 *   <tt>CATCmdContainer<tt> as <tt>classname</tt> 
 */
#define SetWorkbenchMenu(variableName, menu) \
variableName -> SetMenu(menu);


/**
 * Merges the workshop's menubar with the default menubar.
 * @param variableName 
 *   The pointer to the workshop's instance. This pointer is created by @href NewAccess with
 *   <tt>CATCmdWorkshop</tt> as <tt>classname</tt> parameter
 * @param menu
 *   The pointer to the menu's instance. This pointer is created by @href NewAccess with 
 *   <tt>CATCmdContainer<tt> as <tt>classname</tt> parameter
 */
#define SetWorkshopMenu(variableName, menu) \
variableName -> SetMenu(menu);


/**
 * @nodoc
 */
#define SetWorkbenchWithoutToolbar(variableName, TbName) \
variableName -> RemoveToolbar(TbName)

