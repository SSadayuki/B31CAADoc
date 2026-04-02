/* -*-c++-*- */
#ifndef CATISiShuttle_H_
#define CATISiShuttle_H_
//
// CATIA Version 5 Release 1 Framework FittingSimulation
// Copyright   : Dassault Systemes 1997
//----------------------------------------------------------------
// Description : C++ class header file for the class named "CATISiShuttle"
//----------------------------------------------------------------
// Usage : Domain Model for Shuttle
//----------------------------------------------------------------
// Inheritance : CATISiShuttle 
//                 CATBaseUnknown
//----------------------------------------------------------------
// Main Methods : 
//         GetShuttleName    
//         SetShuttleName           
//         GetShuttleAxis
//         SetShuttleAxis        
//         GetShuttleLinkList    
//----------------------------------------------------------------
//


/**
 * @CAA2Level L1  
 * @CAA2Usage U1
 */


#include "G60I0FIT.h"

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

/**
 * Matching flag for activating shuttle angle validation
 * <b>Role</b>: Note for use in CAA.
 */
#define  CATSiFiShuttleAngle ((unsigned short)(1 << 0))

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISiShuttle;
#else
extern "C" const IID IID_CATISiShuttle;
#endif

class CATUnicodeString;
class CATMathTransformation;
class CATMathAxis;
class CATISiList_var;
class CATIMovable_var;
class CATMathVector;
class CATListValCATBaseUnknown_var;


    /**
     * Definition of the CATISiShuttle object.
     * <b>Role:</b> The shuttle object is used to define a grouping of products. 
     * Once products have been placed in the shuttle then they can be moved 
     * all at once.  Also the shuttle has a base location defined by the 
     * shuttle axis.
     */


class ExportedByG60I0FIT CATISiShuttle : public CATBaseUnknown
{
	
	CATDeclareInterface;
	
	public :
	
     /**
      * Retrieve the name of the shuttle.
      * <b>Role:</b> Used to retrieve the name of the shuttle object.
      * @return 
      *     The name of the shuttle.
      */
	virtual CATUnicodeString   GetShuttleName            ()                                                                      const=0;


     /**
      * Set the name of the shuttle.
      * <b>Role:</b> Used to set the name of the shuttle object.
      * @param iName
      *     The new name to set the to the shuttle.
      */
	virtual void               SetShuttleName            (CATUnicodeString iName)                                                const=0;


     /**
      * Retrieve the number of shuttle axises.
      * <b>Role:</b> Retrieve the number of axises associated to the shuttle.
      * @return
      *     The number of axises.
      */
	virtual int                GetNumberOfShuttleAxises  ()                                                                      const=0;


     /**
      * Retrieve shuttle axis information.
      * <b>Role:</b> Retrieve information about the shuttle's axis position.
      * @param oAxis
      *     The position of a shuttle axis.
      * @param iInd
      *     Used to specify which shuttle axis to retrieve.  Note that if no
      *     parameters are specified the first axis is used.
      */
	virtual void               GetShuttleAxis            (CATMathTransformation &oAxis, int iInd=0)                              const=0;


     /**
      * Sets the shuttle axis information.
      * <b>Role:</b> Sets positional information about the shuttle's axis.
      * @param iAxis
      *     The position of a shuttle axis.
      * @param iInd
      *     Used to specify which shuttle axis to set.  Note that if no
      *     parameters are specified the default behavior is to set it as the\
      *     first shuttle axis.
      * @param iTrans
      *     Used to specify if to use transient move or not.  It is recommended
      *     to use the default of FALSE.
      */
    virtual void               SetShuttleAxis            (const CATMathTransformation &iAxis, int iInd=-1, boolean iTrans=FALSE) const=0;


     /**
      * Remove a specific shuttle axis.
      * <b>Role:</b> Used to remove a specific assigned shuttle axis.
      * @param iInd
      *     Used to specify which shuttle axis to remove
      */
	virtual void               RemoveShuttleAxis         (int iInd)                                                              const=0;


     /**
      * @nodoc
      * Used to set/get information related to the shuttle axis visibility.
      * This seems related to shuttle axises after the first axis.  That is the
      * first axis is drawn with a custom rep with an icon, then any other axis
      * is drawn with a CAT3DAxisRep. These CAT3DAxisReps can be drawn or not
      * depending on these two functions.
      */
	virtual boolean            GetShuttleAxisesVisibility()                                                                      const=0;
     /** @nodoc */
	virtual void               SetShuttleAxisesVisibility(boolean iVisible)                                                      const=0;


     /**
      * @nodoc 
      * The following is used only in the Gather method below and thus seems to be
      * only used internally.  
      */
	virtual void               GetProductAbsolutePosition(CATMathTransformation &oPos, int iInd, int iSec=0)                     const=0;


     /**
      * @nodoc
      * Used to synchronize the shuttle axis and the product positions.
      * <b>Role:</b> Position the products with respect to the shuttle axis.
      * This is done because in transiant move mode we just move the shuttle axis
      * and product reps.  So at the end of the move process, the product positions
      * are synchronized with the shuttle axis.
      */
	virtual void               Gather()                                                                                          const=0;
	

     /**
      * Retrieve the number shuttle lists.
      * <b>Role:</b> Retrieve the number of lists of items associated to the shuttle.
      * @return
      *     The number of lists.  
      */
	virtual int                GetNumberOfShuttleLists   ()                                                                      const=0;


     /**
      * Retrieve a specific shuttle list.
      * <b>Role:</b> Retrieve a list of items from the current shuttle.
      * @param iInd
      *     Used to specify a particular list from the shuttle.  Note that if this
      *     is not specified then the first shuttle is returned.
      * @return
      *     A list contained within the shuttle.
      */
	virtual CATISiList_var     GetShuttleList            (int iInd=0)                                                            const=0;


     /**
      * Append a list to the shuttle.
      * <b>Role:</b> Appends a list of items to the shuttle.
      * @param iList
      *     The list of items to append to the shuttle.
      */
	virtual void               AddShuttleList             (CATISiList_var iList)                                                  const=0;


     /**
      * Stores a list to the shuttle.
      * <b>Role:</b> Stores a list of items to the shuttle.  
      * @param iList
      *     The list of items to store in the shuttle.
      * @param iInd
      *     Index to specify the position of where the list should be stored.
      *     If this parameter is not provided, then iList is added to the
      *     end.
      */
	virtual void               SetShuttleList            (CATISiList_var iList, int iInd=-1)                                     const=0;


     /**
      * Removes a list from the shuttle.
      * <b>Role:</b> Removes a list of items from the shuttle.  
      * @param iInd
      *     Index to specify the which list should be removed.
      */
	virtual void               RemoveShuttleList         (int iInd)                                                              const=0;


     /**
      * Returns the shuttle's reference object.
      * <b>Role:</b> Returns the shuttle's reference object.
      * @return
      *     The shuttle's reference object.
      */
	virtual CATIMovable_var    GetReferenceObject        ()                                                                      const=0;


     /**
      * Sets the shuttle's reference object.
      * <b>Role:</b> Sets the shuttle's reference object.
      * @param iRef
      *     A movable object to be assigned as the reference object.
      * @return
      *     0 : OK <br>
      *     1 : The Set operation failed.  It can be the result of
      *         a cross reference. 
      */
	virtual int                SetReferenceObject        (CATIMovable_var iRef)                                                  const=0;


     /**
      * @nodoc
      * Retrieve the validation test status of the shuttle.
      * <b>Role:</b> Retrieve the validation test status of the shuttle.
      * @param oValidation
      *     The status of the validation test.
      * @return
      *     TRUE  : The status was found correctly. <br>
      *     FALSE : The status was not found correctly.
      */
	virtual boolean            GetValidationTest         (unsigned int &oValidation)                                             const=0;


     /**
      * @nodoc
      * Set the validation test status of the shuttle.
      * <b>Role:</b> Set the validation test status of the shuttle.
      * @param iValidation
      *     The new validation status to be set with the shuttle.
      */
	virtual void               SetValidationTest         (unsigned int iValidation)                                              const=0;


     /**
      * @nodoc
      * Retrieve the angle used during validation with the shuttle.
      * <b>Role:</b> Retrieve the angle used during validation with the shuttle.
      * @param oAngle
      *     The angle used during validation.
      * @return
      *     TRUE  : The angle value was found correctly. <br>
      *     FALSE : The angle value was not found correctly.
      */
	virtual boolean            GetAngle                  (double &oAngle)                                                        const=0;
 

     /**
      * @nodoc
      * Set the angle used during validation with the shuttle.
      * <b>Role:</b> Set the angle used during validation with the shuttle.
      * @param iAngle
      *     The angle used during validation.
      */
    virtual void               SetAngle                  (double iAngle)                                                         const=0;


     /**
      * @nodoc
      * Retrieve the vector used during validation with the shuttle.
      * <b>Role:</b> Retrieve the vector used during validation with the shuttle.
      * @param oVector
      *     The vector used during validation. 
      * @return
      *     TRUE  : The angle value was found correctly. <br>
      *     FALSE : The angle value was not found correctly.
      */
	virtual boolean            GetVector                 (CATMathVector &oVector)                                                const=0;


     /**
      * @nodoc
      * Set the vector used during validation with the shuttle.
      * <b>Role:</b> Set the vector used during validation with the shuttle.
      * @param iAngle
      *     A vector to be used during validation.
      */
    virtual void               SetVector                 (CATMathVector iVector)                                                 const=0;


     /** 
      * @nodoc 
      * BPL, 02/07/2005, IR 0481491
      * Method: RebuildAllShuttledObjectCallbacks
      * Removes callbacks for all shuttled objects and recreates the callbacks.
      * This method was created to fix callback problems when pasting a shuttle 
      * into a new container.
      * Returns S_OK if data could be accessed.
      */
	virtual HRESULT            RebuildCBForObjectsInShuttle()                                                                    const=0;


    // Used to get/set section lists to a shuttle.  This is only done during when interacting with
    // a track.  When defining the shots for our track we want the sections to update.
    /** @nodoc */
    virtual CATListValCATBaseUnknown_var & GetSectionList ()                                                                          =0;
    /** @nodoc */
    virtual boolean            SetSectionList (CATListValCATBaseUnknown_var & spSectionList)                                          =0;

};

CATDeclareHandler(CATISiShuttle,CATBaseUnknown);

// CATISiShuttle_H_
#endif
