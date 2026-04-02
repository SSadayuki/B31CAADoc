/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef	_SDAI_MODEL_CONTENTS_H_
#define	_SDAI_MODEL_CONTENTS_H_


#include "KS0LATE.h"

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiModelContents
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Corinne  VANDAELE (fevrier 1996)
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

#include "SdaiMacro.h"
#include "SdaiSessionInstance.h"
#include "SdaiString.h"
#include "CATSdaiModelContents.h"       //for inlined acceptModelVisitor

//class CATSdaiModelContents;
class CATSdaiModel;
class SdaiBoolean;
class SdaiSet;
class SdaiEntityExtents;
class SdaiModelVisitor;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiModelContents' represente le contenu d'un modele, a savoir :
//		- l'ensemble de toutes les instances de ce modele
//		- l'ensemble des entites definies dans le schema associe a ce modele
//		- l'ensemble des entites effectivement instanciees dans ce modele
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   sdai_model_contents
//
//		instances	  : SET OF entity_instance;	(* Toutes les instances du modele *)
//
//
//		folders		  : SET OF entity_extent;	(* Les "folders" de toutes les entites *)
//								(* definies dans le schema associe au modele *)
//
//		populated_folders : SET OF entity_extent;	(* Les "folders" de toutes les entites *)
//								(* instanciees dans le modele *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

class ExportedByKS0LATE SdaiModelContents : public SdaiSessionInstance
{
	// SdaiModel est friend pour pouvoir acceder aux 2 folders
	friend class SdaiModel;
	friend class CATSdaiModel;

	// ****************************************************************************************
	// C O N S T R U C T O R S
	// D E S T R U C T O R S
	// ****************************************************************************************
private :
	SdaiModelContents (SdaiSchemaH&, const SdaiModel*);
//	SdaiModelContents ( const SdaiModelContents& );

	~SdaiModelContents ();

	// ****************************************************************************************
	// A C C E S    F U N C T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
	const	SDAIAGGRH(SdaiSet,SdaiEntityExtentsH)	Folders ()		const;
	const	SdaiBoolean &				TestFolders()		const;

	const	SDAIAGGRH(SdaiSet,SdaiEntityInstanceH)	Instances ()		const;
	const	SdaiBoolean &				TestInstances()		const;

	const	SDAIAGGRH(SdaiSet,SdaiEntityExtentsH)	Populated_folders ()	const;
	const	SdaiBoolean &				TestPopulated_folders()	const;
/*
 ** ---------------------------------------------------------------------------------
 ** Implementation D.S. permettant de retourner le nombre d'instances crees 
 ** dans le modele depuis sa creation.  - AJOUT bcc -
 ** ---------------------------------------------------------------------------------
 */
    
    unsigned int GetInstanceCount() const;          //TODO make context sensitive
	// ****************************************************************************************
	// S D A I    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
        /* Methode renvoyant le nom en clair de la classe */
	virtual const SdaiString &    GetInstanceTypeName()   const ;

        /* determine si l'instance est d'un type appele typeName ou de l'un de ses sous-types */
	virtual const SdaiBoolean &   IsKindOf( const SdaiString& iTypeName )  const;
    /**
     * @nodoc
     * sends a visitor to iterate over all the EntityExtents and selected instances.
     * the Visitor will be called on the VisitExtent method for each extent and depending on the
     * return value it will be called on VisitInstance on each instance of this extent.
     * The visit can be stopped at any instance using the return value of VisitInstance.
     *
     * @param iVisitor, the visitor to be accepted
     * @return 0 if the iteration was aborted due to the return value of a call to VisitInstance, 
     * 1 if the iteration finished normally and -1 otherwise (error occured).
     */
    inline int acceptModelVisitor(SdaiModelVisitor * iVisitor) const
    {
       return _ModelContents->acceptModelVisitor(iVisitor);
    }

	// ****************************************************************************************
	// D S    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public:
        inline CATSdaiModelContents * ModelContents() const { return _ModelContents; }

	// ****************************************************************************************
	// I M P L E M E N T A T I O N
	// ****************************************************************************************
protected:
	// Pointeur sur implementation
	CATSdaiModelContents * _ModelContents;


};

#endif	/* _SDAI_MODEL_CONTENTS_H_ */







