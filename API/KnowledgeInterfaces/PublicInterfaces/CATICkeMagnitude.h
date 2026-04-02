#ifndef CATICkeMagnitude_h
#define CATICkeMagnitude_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// inheritance
#include <CATBaseUnknown.h>

// module
#include "KnowledgeItf.h"

// Forwards 
#include <CATInterfaceEvents.h>
#include <CATICkeRelationForwards.h>

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeMagnitude;
#else
extern "C" const IID IID_CATICkeMagnitude;
#endif



/**   
 * Interface dedicated to dimensions type management.
 * <b>Role</b>: Length, Mass ,Time ... are magnitudes. This interface offers services to manage mainly their units.<br>
 * This interface is based on the International System Magnitude Management called MKS.<br>
 * Each magnitude has a default unit corresponding to the MKS System. <br>
 * for example : the default unit for length is meter <br>
 *               the default unit for weight is kilogram <br>
 *               etc...<br>
 * All conversion methods are working with this MKS unit on one side. <br>
 * All magnitudes implement CATICkeType.<br>
 * 
 * @see CATICkeType
 * @see CATICkeMKSUnit
 * @see CATICkeUnit
 */
class ExportedByKnowledgeItf CATICkeMagnitude : public CATBaseUnknown
{

public :

/**
 * Returns magnitude's NLS name (that can be shown to a user).<br>
 * If you're interested in coded name, use CATICkeType_var::Name().<br>
 * This NLS is found in LiteralsNLS catalog.<br>
 */
virtual CATUnicodeString Name () const = 0;

 
/**
 * Returns tolerance between real.<br> 
 * Gets the epsilon in MKS.
 */
virtual double Epsilon () const = 0;


/**
 * Gets the list of units corresponding to this magnitude.<br>
 * @return  a pointer to a list of CATBaseUnknown_var not to be desallocated
 */
virtual CATCkeListOfUnit Units() const = 0;


/**
 * @nodoc do not use   
 */
virtual void             SetUnits (const CATCkeListOfUnit iListUnits) = 0;

/**
 * @nodoc do not use
 */
virtual void Add (const CATICkeUnit_var &iUnit) = 0;

/**
 * Returns the storage unit.<br>
 * each magnitude as one storage unit predefined.<br> 
 */
virtual CATICkeUnit_var  StorageUnit() const = 0;


/**
 * Returns MKS unit equivalence.
 */
virtual CATICkeMKSUnit_var MKS () const = 0;


/**
 * @nodoc do not use 
 */
virtual void SetMKS (const CATICkeMKSUnit_var &iMKS)  = 0;




/**
 * Returns the current visualisation unit.<br>
 * For each magnitude there is one current unit, which is the visualisation and dialog unit.<br>
 * It can be changed.<br>
 */
virtual CATICkeUnit_var  CurrentUnit() const = 0;

 
/**
 * Sets current visualisation unit.
 * <br>(no effect on storage unit)
 * @param iCurrentUnit visualisation unit to be set
 * @param iStored = CATCke::True modifies feature stored information or only temporary
 */
virtual void SetCurrentUnit (const CATICkeUnit_var &iCurrentUnit,
							 const CATCke::Boolean &iStored = 1) = 0;

/**
 * Returns change unit notification.<br>
 * Used to subscribe to change unit.
 */
virtual CATCallbackEvent GetChangeUnitNotification()  = 0;


/**
 * Tries to decode "3 cm".<br>
 * Can decode "3" in current visualisation unit.
 * @param iStringToDecode string to be decoded
 * @param oValueDecoded double decoded in MKS
 * @return <br><b>Legal values</b>:
 * <tt>CATCke::True</tt> if successful.
 * <tt>CATCke::False</tt> if failed.
 */
virtual CATCke::Boolean  DecodeReal (const CATUnicodeString &iStringToDecode,double &oValueDecoded) const=0 ;

 
  
/**
 * Compares two vales in MKS considering the epsilon.
 * @param iValue1 first value in MKS
 * @param iValue2 second value in MKS
 * @return <br><b>Legal values</b>:
 * <tt>CATCke::True</tt> if comparison Ok.
 * <tt>CATCke::False</tt> if comparison Ko.
 */
virtual CATCke::Boolean  Compare (const double iValue1,const double iValue2) const = 0;

/**
 * Returns the mks unit for this magnitude.
 */
virtual CATICkeUnit_var MKSUnit() const = 0;




private:

  // to define ClassName
  CATDeclareInterface;


}; 

CATDeclareHandler(CATICkeMagnitude,CATBaseUnknown);

#endif


