// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
//  SDAI -- C++ Language Binding -- SdaiInstance
// ------------------------------------------------------------------------------------------------
//  Auteurs :
//      Corinne  VANDAELE (fevrier 1996)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 00
//	DATE		: fevrier 1996
//	AUTEUR		: CVE
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (binding C++)
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_INSTANCE_H_
#define	_SDAI_INSTANCE_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>

#include <SdaiEntityInstance.h>

class SdaiBoolean;
class SdaiString;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiInstance' 
//
// ------------------------------------------------------------------------------------------------
// Schema EXPRESS :
//
//	ENTITY   sdai_instance
//
//	    ABSTRACT SUPERTYPE OF ( ONEOF (dictionary_instance, session_instance) ) ;
//
//          SUBTYPE OF (entity_instance)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

/** Class representing an SDAI instance. */
class ExportedByKS0SIMPL SdaiInstance : public SdaiEntityInstance
{
public :
	/* **************************************************************************************/
	/* C O N S T R U C T O R S								*/
	/* D E S T R U C T O R S								*/
	/* **************************************************************************************/
	/** @nodoc */
	SdaiInstance ();
	/** @nodoc */
	SdaiInstance ( const SdaiInstance& a_repliquer );
	virtual ~SdaiInstance ();           //bcc: the virtual is inherited in any case, but lets make it obvious

	// ****************************************************************************************
	// S D A I    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
	/** @nodoc */
	// determine si l'instance est d'un type appele typeName ou de l'un de ses sous-types
	virtual	const SdaiBoolean & IsKindOf	( const SdaiString&	typeName )  const;

	/** @nodoc */
	/* Methode renvoyant le nom en clair de la classe */
    virtual const SdaiString &  GetInstanceTypeName()   const ;


};

#endif	/* _SDAI_INSTANCE_H_ */













