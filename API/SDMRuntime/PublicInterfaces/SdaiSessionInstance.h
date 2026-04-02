// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_SESSION_INSTANCE_H
#define	_SDAI_SESSION_INSTANCE_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
//  SDAI -- C++ Language Binding -- SdaiSessionInstance
// ------------------------------------------------------------------------------------------------
//  Auteurs :
//	Bertrand LAPLACE  (fevrier 1994)
//      Corinne  VANDAELE (fevrier 1994)
//	Michele  FLAMAND  (mars 1994)
//	Olivier  FORNER   (mars 1994)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 00
//	DATE		: 15 mars 1994
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------
#include <SdaiMacro.h>
#include <SdaiInstance.h>

//class CATSdaiSessionInstance;
class SdaiBoolean;
class SdaiString;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiSessionInstance' represente une instance d'une entite definie dans une session SDAI
//
// ------------------------------------------------------------------------------------------------
// Schema EXPRESS :
//
//	ENTITY   session_instance
//
//	    SUBTYPE OF ( sdai_instance ) ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.7, p. 38
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.7.2.*, p. 316 a 317
// ------------------------------------------------------------------------------------------------
/** Class representing an instance of an entity defined in an SDAI session. */
class ExportedByKS0LATE SdaiSessionInstance : public SdaiInstance
{
	/* **************************************************************************************/
	/* C O N S T R U C T O R S								*/
	/* D E S T R U C T O R S								*/
	/* **************************************************************************************/
public :
	/** @nodoc */
	SdaiSessionInstance ();
	/** @nodoc */
	SdaiSessionInstance ( const SdaiSessionInstance& a_repliquer );
	virtual ~SdaiSessionInstance();             //bcc: the virtual is inherited in any case, but lets make it obvious

	/* ***************************************************************************************/
	/* D S   O P E R A T I O N    D E C L A R A T I O N S 					 */
	/* ***************************************************************************************/
public :
	/** @nodoc */
	// Renvoie le nom du schema de l'instance (Ajout BLC)
	/* virtual */
	const SdaiString &	GetInstanceSchemaName()	const ;     //bcc: NOTE: beware this is not virtual, it is not overriden yet but if it is this will need to change

	/** @nodoc */
	// determine si l'instance est d'un type donne ou de l'un de ses sous-types
	virtual	const SdaiBoolean & IsKindOf	( const SdaiString&	typeName )  const;

	/** @nodoc */
	/* Methode renvoyant le nom en clair de la classe */
    virtual const SdaiString &   GetInstanceTypeName()   const ;

	/** @nodoc */
	// Methode renvoyant le nom en clair de la classe 
	static  const SdaiString &      LeType(); /*"SessionInstance"*/

	/* acces a l'implementation */
//        inline  CATSdaiSessionInstance *   SessionInstance()  const { return  _SessionInstance; }

	/* ***************************************************************************************/
	/* I M P L E M E N T A T I O N 								 */
	/* ***************************************************************************************/
//protected:
	// Pointeur sur implementation
//	CATSdaiSessionInstance *	_SessionInstance;

public:
	/** @nodoc */
	// Pour usage interne uniquement - Creer a l'initialisation de la session
	static SdaiModelH	session_model_;


};


#endif	/* _SDAI_SESSION_INSTANCE_H */
