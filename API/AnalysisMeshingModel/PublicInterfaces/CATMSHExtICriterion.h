#ifndef CATMSHExtICriterion_h
#define CATMSHExtICriterion_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATIMSHCriterion.h"
#include "CATUnicodeString.h"

/**
 * Adapter for CATIMSHCriterion interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHCriterion.
 * That means one should derive from this class to implement a new quality criterion.
 * Don't forget to initialize _Name and _Infos in your constructor.
 */
class ExportedByMSHModel CATMSHExtICriterion : public CATIMSHCriterion
{

public: 

/**
 *  Constructeur
 */
  CATMSHExtICriterion ();
/**
 * Destructor.
 */
  virtual ~CATMSHExtICriterion ();
/**
 * Returns the name of the quality criterion.
 */
  inline const CATUnicodeString & GetName () const;
/**
 * Returns the name of the unit of criteria;
 */
  inline const CATUnicodeString & GetMagnitude () const;
/**
 * Returns informations on the quality criterion such as minimum and maximum value ...
 */
  inline const CATMSHCriterionInfos * GetInfos () const;
/**
 * Returns if the criterion is use by the mesh analysis quality.
 */
  virtual int IsVisible () const { return 1;};
/**
 * Returns if the criterion needs geometric support.
 */
  virtual int NeedGeometricSupport () const { return 0;};

protected:

/** @nodoc */
  CATMSHExtICriterion ( const CATMSHExtICriterion& From );
/** @nodoc */
  CATMSHExtICriterion& operator= ( const CATMSHExtICriterion& From );

/**
 * Name of the quality criterion.
 * (should be initialized in the implementation constructor).
 */
  CATUnicodeString *   _Name;
/**
 * Name of the unit criterion.
 * (should be initialized in the implementation constructor).
 */
  CATUnicodeString  _Mag;
/**
 * Informations on the quality criterion.
 * (should be initialized in the implementation constructor).
 */
  CATMSHCriterionInfos _Infos;
}; 

//
//  Implémentations inline
//

//
//==========================================================
// GetName: NLS name of criteria
//==========================================================
//
inline const CATUnicodeString & CATMSHExtICriterion::GetName () const
{
  return *_Name;
}
//
//==========================================================
// GetName: NLS name of criteria
//==========================================================
//
inline const CATUnicodeString & CATMSHExtICriterion::GetMagnitude () const
{
  return _Mag;
}

//
//==================================================
// GetInfos : lecture des infos
//==================================================
//       
inline const CATMSHCriterionInfos * CATMSHExtICriterion::GetInfos () const 
{
  return (CATMSHCriterionInfos *) &_Infos;
}
#endif 
