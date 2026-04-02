/* -*-c++-*- */
#ifndef CATISiList_H
#define CATISiList_H
// COPYRIGHT DASSAULT SYSTEMES 2000


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "SimulationItfCPP.h"

#include "CATBaseUnknown.h"
#include "CATCallbackManager.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATISiList;
#else
extern "C" const IID IID_CATISiList;
#endif

#define MOVE_LIST

/*
 * Undefined list
 */
#define LIST_UNDEFINED    0

/*
 * Empty list
 */
#define LIST_EMPTY        1

/* 
 * List from CSO 
 */
#define LIST_FROM_CSO     2

/*
 * List all top 
 */
#define LIST_ALL_TOP      3

/*
 * List all bottom
 */
#define LIST_ALL_BOTTOM   4

/*
 * Forced list
 */
#define LIST_FORCED       5

/*
 * List all top 
 */
#define LIST_ALL_TOP_C    6

/*
 * List all bottom
 */
#define LIST_ALL_BOTTOM_C 7


/*
 * No notification
 */
#define LIST_NONE        0

/* 
 * Local notifications
 */
#define LIST_LOCALNOTIF  (1 << 0)

/*
 * Global notifications
 */
#define LIST_GLOBALNOTIF (1 << 1)

class CATUnicodeString;
class CATListValCATBaseUnknown_var;
class CATBaseDispatch;

//==========================================================================
//                    Interface  CATISiList
//==========================================================================


    /**
     * Definition for CATISiList object.  It is used to hold simulation 
     * experiments.  The build of the list disengages the following notification
     * CATISiSpecEvents::GetBuildNotification().
     */


class ExportedBySimulationItfCPP CATISiList : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
     * Retrieves the name of the list.
     * @return 
     *      Returns the name of the list.
     */
    virtual CATUnicodeString GetListName()                                                      const=0;


    /**
     * Stores the name of the list.
     * @param iName
     *      The new name of the list
     */
    virtual void             SetListName(CATUnicodeString iName)                                const=0;


    /**
     * Mark list for rebuild.  This is to tell the list that it needs to dispatch 
     * any necessary callbacks.
     * @param iNotif
     *      The type of notification to dispatch.    
     */     
    virtual void             MarkForRebuild(int iNotif=LIST_GLOBALNOTIF)                        const=0;


    /**
     * Retrieves the objects contained with in the list.
     * @param oList
     *      A list of all the items contained in the CATISiList.
     */
    virtual void             GetListOfObjects(CATListValCATBaseUnknown_var &oList)              const=0;


    /**
     * Retrieves the remaining objects in the model not contained in the list.
     * @param oList
     *      Retrieves a collection of the complementary objects that in the list with respect to the 
     *      remainder of the model.
     */
    virtual void             GetComplementaryListOfObjects(CATListValCATBaseUnknown_var &oList) const=0;


    /**
     * Retrieves the type of the list.
     * @return 
     *      Returns the type of the list.
     */
    virtual int              GetType()                                                          const=0;


    /**
     * Sets the type of the list.
     * @param iType
     *      The type of the list.
     */
    virtual void             SetType(int iType=LIST_UNDEFINED)                                  const=0;


    /**
     * Callback used to notify if the results have been modified.
     * (Called by a build).
     */
    virtual CATCallbackEvent GetModifyNotification()                                            const=0;


    /**
     * Callback used to notify if the results have been modified.
     * (Called by a build).
     */
    virtual CATCallbackEvent GetModifyNoValidateNotification()                                  const=0;

}; 

CATDeclareHandler(CATISiList,CATBaseUnknown);
#endif

