#ifndef CATICfgEffectivity_h
#define CATICfgEffectivity_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Class to manage effectivity
 */


#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATIAV5Level.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgEffectivity ;
#else
extern "C" const IID IID_CATICfgEffectivity ;
#endif


class CATUnicodeString;
class CATICfgBasicEffectivity_var;
class CATListValCATICfgBasicEffectivity_var;
class CATListValCATICfgModification_var;
class CATListValCATICfgNormalValue_var;
class CATICfgEffectivity_var;
class CATICfgORExpression_var;
class CATIConfigurable_var;
class CATListValCATICfgSimpleSpecification_var;

class ExportedByGUIDVPMInterfaces CATICfgEffectivity : public CATBaseUnknown {

CATDeclareInterface;
	public:
  

/** Supported types of effectivity
 * 'All' is used in queries in order to specify you want to retrieve
 * validated effectivities and modifications
 */
enum Type {ValidatedEffectivity, Modification, SnapShot,  All};

/**
 * Retrieves the Effectivities of an <b>ORExpression</b>
 *  @param oList
 *    The effectivities.
 */
     virtual HRESULT GetListOfEffectivities(CATListValCATICfgBasicEffectivity_var& oList) const= 0;
	 
/**
 * Adds an effectivity to an <b>ORExpression</b>
 *  @param iEffectivity
 *    The effectivity to add.
 */
     virtual HRESULT AddEffectivity(const CATICfgBasicEffectivity_var& iEffectivity) = 0;

/**
 * Adds an effectivity to an <b>Effectivity</b>
 *  @param iEffectivity
 *    The effectivity to add.
 */
     virtual  HRESULT AddEffectivity(const CATICfgEffectivity_var& iEffectivity)= 0;

/**
 * Compute the AND-Operation between this Effectivity and a given input Effectivity.
 * @param
 *   The input Effectivity.
 * @param 
 *   The result of the AND-operation.
 */
     virtual  HRESULT ComputeAND(const CATICfgEffectivity_var& iEffectivity,
                                 CATListValCATICfgBasicEffectivity_var &oResult) = 0;

/**
 * Removes an Effectivity from an Effectivity
 *  @param iEffectivity
 *    The effectivity to remove.
 */
     virtual HRESULT RemoveEffectivity(const CATICfgEffectivity_var& iEffectivity, CATListValCATICfgBasicEffectivity_var &oResult) = 0;

/** @nodoc */	 
virtual void Dump() const = 0;

/** @nodoc */
         virtual HRESULT Simplify() = 0;

/** @nodoc */
	 virtual HRESULT GetAsXmlString(CATUnicodeString &OutString) const = 0;

/** @nodoc */
	 virtual HRESULT GetAsString(const CATListValCATICfgSimpleSpecification_var &iSpecList,
								 CATUnicodeString& SpecString) const = 0;
	 
/** @nodoc */
	 virtual HRESULT Translate(CATICfgORExpression_var &oORExp) const = 0;

/** @nodoc */
	 virtual HRESULT Translate(const CATIConfigurable_var& iCo, CATICfgORExpression_var &oOrExp) const = 0;

/** @nodoc */
	 virtual HRESULT IsTrue(const CATListValCATICfgNormalValue_var & iList) const = 0;

/** @nodoc */
     virtual HRESULT GetListOfSimpleSpecs(CATListValCATICfgSimpleSpecification_var& oSpecList) const = 0;
     
#if defined(CATIAV5R10)
/** @nodoc */
	 virtual HRESULT GetAsString(CATUnicodeString& SpecString) const = 0;
#endif
};

//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgEffectivity, CATBaseUnknown);

#endif
