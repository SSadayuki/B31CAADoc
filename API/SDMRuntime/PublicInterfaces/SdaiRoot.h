/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_ROOT_H_
#define	_SDAI_ROOT_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>

/* ---------------------------------------------------------------------------------------------*/
/* SDAI -- C++ Language Binding -- SdaiRoot -- Header 						*/
/* ---------------------------------------------------------------------------------------------*/
/* Auteurs :											*/
/*	Corinne  VANDAELE (fevrier 1996)							*/
/* ---------------------------------------------------------------------------------------------*/
/*  Historique :										*/
/*												*/
/*	MODIFICATION	: 00									*/
/*	DATE		: 5 fevrier 1996							*/
/*	AUTEUR		: CVE									*/
/*	NATURE		: Creation								*/
/*	DESCRIPTION	: Classe racine des classes Sdai echangeant des evenements              */
/*				EntityInstance et AggrInstance.					*/
/*				Classe racine des classes offrant un handler ?			*/
/*												*/
/* ---------------------------------------------------------------------------------------------*/

//#include "CATSdaiDefineVirtual.h"
#include "SdaiMacro.h"

class CATSdaiRoot;
class SdaiBoolean;
class SdaiEventDesc;
class SdaiString;

/** Class representing the root of SDAI classes exchanging specific events. */ 
class ExportedByKS0SIMPL SdaiRoot
{

friend class SdaiSession;
#ifdef SDAI_MULTI_TRANS_BCC    
    public:
    enum ContextSensitivity {CurrentTransactionContext, DriverTransactionContext};
    enum COWSupport { SupportsCOW, NoCOW };

#endif
	/* **************************************************************************************/
	/* C O N S T R U C T O R S								*/
	/* D E S T R U C T O R S								*/
	/* **************************************************************************************/
protected :
	/** @nodoc */
	SdaiRoot () ;
	/** @nodoc */
	SdaiRoot (const SdaiRoot &	a_repliquer) ;

	virtual	~SdaiRoot () ;

	/* ***************************************************************************************/
	/* D S   O P E R A T I O N    D E C L A R A T I O N S 					 */
	/* ***************************************************************************************/
public :
	/** @nodoc */
	/* Ajout d'un Callback */
	void	AddCallback (	SdaiEventId	EventName ,
				SdaiRootH	ToCall ,
				WakeUpFonction	Fonc ) ;

	/** @nodoc */
	/* Retrait d'un CallbackClasse racine des classes offrant un handler ? */
	void	RemoveCallback (SdaiEventId		EventName ,
				SdaiRootH		ToCall ,
				WakeUpFonction		Fonc ) ;

	/** @nodoc */
	/* Envoi d'un evenement*/
	void	SendEvent ( SdaiEventDesc &	Event ) ;

	/** @nodoc */
	/* Methode renvoyant le nom en clair de la classe */
    virtual const SdaiString &      GetInstanceTypeName()   const ;

	/** @nodoc */
	/* determine si l'instance est d'un type appele typeName ou de l'un de ses sous-types */
    virtual const SdaiBoolean &     IsKindOf    ( const SdaiString&     typeName )  const;

	/** @nodoc */
	virtual const char *const className() ;   

public :
	/** @nodoc */
	/* acces a l'implementation */
    inline  CATSdaiRoot *          	Root()  const { return  _Root; }

	/* ***************************************************************************************/
	/* I M P L E M E N T A T I O N 								 */
	/* ***************************************************************************************/
protected:    
	/** @nodoc */
	// Pointeur sur implementation
	CATSdaiRoot *  _Root;



};


// -------------------------------------------------------------------------------------------------
// Liste des evenements (CATCallable) ‚mis par SDAI
// -------------------------------------------------------------------------------------------------

// << Evenement du type EventDesc >>
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtEnd ;

// << Evenement du type AttrEventDesc >>
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtChangeMode ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtModifyAttribute ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtCreateAggrAttribute ;

// << Evenement du type AggrEventDesc >>
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtAddMember ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtRemoveMember ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtChangeElem ;

// << Evenement du type HoldingEventDesc >>
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtCreate ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtOpen ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtClose ;
/** @nodoc */
ExportedByKS0SIMPL extern	SdaiEventId	EvtDelete ;

#endif	/* _SDAI_ROOT_H_ */






