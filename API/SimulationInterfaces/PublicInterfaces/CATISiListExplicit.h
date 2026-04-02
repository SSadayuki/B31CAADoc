/* -*-c++-*- */
#ifndef CATISiListExplicit_H
#define CATISiListExplicit_H
// COPYRIGHT DASSAULT SYSTEMES 2000
#include "SimulationItfCPP.h"

#include "CATBaseUnknown.h"
#include "CATCallbackManager.h"
#include "CATBooleanDef.h"

#define LIST_MODE_COLLAPSED 0
#define LIST_MODE_EXPANDED  1

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATISiListExplicit;
#else
extern "C" const IID IID_CATISiListExplicit;
#endif

//==========================================================================
//                    Interface  CATISiListExplicit
//==========================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

/**
 * List for simulation experiment.
 */

#define LIST_MODE_EXPANDED_3DVISUPROVIDER 2

class ExportedBySimulationItfCPP CATISiListExplicit : public CATBaseUnknown
{
    CATDeclareInterface;

public :


    /**
     * Get the number of objects.
     * <br><b>Role:</b> Retrieves the number of objects in the current
     * object.
     * @return
     *      The number of objects stored.
     */
    virtual int                GetNumberOfObjects()                             =0;


    /**
     * Adds an object to the list.
     * <br><b>Role:</b> Will add an object to the list, provided that the 
     * object is valid.
     * @return
     * <ul>
     *      <li><b>TRUE</b> : If the object was successfully added to the list.
     *      <li><b>FALSE</b>: If the object was not added to the list.
     * </ul>
     */
    virtual boolean            AddObject(CATBaseUnknown_var &iObj)              =0;


    /**
     * Sets a specific object within the list.
     * <br><b>Role:</b> Sets a specific object within the list, provided that the 
     * object is valid.
     * @return
     * <ul>
     *      <li><b>TRUE</b> : If the object was successfully added to the list.
     *      <li><b>FALSE</b>: If the object was not added to the list.
     * </ul>
     */
    virtual boolean            SetObject(CATBaseUnknown_var &iObj, int iIndice) =0;


    /**
     * Gets an object from the list.
     * <br><b>Role:</b> Retrieves a specific object based on an index that is 
     * contained in the list.
     * @param iIndice
     *      An index for the object to obtain.
     * @return
     *      The oject from the list.
     */
    virtual CATBaseUnknown_var GetObject(int iIndice)                           =0;


    /**
     * Removes an object from the list.
     * <br><b>Role:</b> Removes a specific object from the list.
     * @param iObj
     *      The object to be removed.
     * @return
     * <ul>
     *      <li><b>TRUE</b> : If the object was successfully removed.
     *      <li><b>FALSE</b>: If the object was not removed.
     * </ul>
     */
    virtual boolean            RemoveObject(CATBaseUnknown_var &iObj)           =0;


    /**
     * Removes an object from the list.
     * <br><b>Role:</b> Removes a specific object based on a specific index from 
     * the list.
     * @param iIndex
     *      The index of the object to be removed.
     * @return
     * <ul>
     *      <li><b>TRUE</b> : If the object was successfully removed.
     *      <li><b>FALSE</b>: If the object was not removed.
     * </ul>
     */
    virtual boolean            RemoveObject(int iIndice)                        =0;


    /**
     * Removes all objects from the list.
     * <br><b>Role:</b> Removes all of the objects from the list.
     * @return
     * <ul>
     *      <li><b>TRUE</b> : If the objects were successfully removed.
     *      <li><b>FALSE</b>: If the objects were not removed.
     * </ul>
     */
    virtual boolean            RemoveAll()                                      =0;


    /**
     * Gets the mode of the list.
     * <br><b>Role:</b> Retrieves the mode from the list.  This mode is used
     * when evaluating the list contents.
     */
    virtual int                GetMode()                                        =0;


    /**
     * Sets the mode of the list.
     * <br><b>Role:</b> Stores the mode from the list.  This mode is used
     * when evaluating the list contents.
     * @param iMode
     *      The desired mode to set.
     */
    virtual void               SetMode(int iMode)                               =0;


    /**
     * Callback to signal when the list is modified.
     */
    virtual CATCallbackEvent   GetModifyNotification()                          =0;

} ; 
CATDeclareHandler(CATISiListExplicit,CATBaseUnknown);
#endif

