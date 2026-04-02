/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_MODEL_H_
#define	_SDAI_MODEL_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "KS0LATE.h"

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiModel
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
// ------------------------------------------------------------------------------------------------

#include "SdaiMacro.h"
#include "SdaiSessionInstance.h"
#include "SdaiString.h"
#include "CATCollec.h"
#include "SdaiModelContents.h"

class CATSdaiModel;
class SdaiBoolean;
class SdaiSet;
class SdaiList;
class SdaiSchema;
class SdaiModelContents;
class SdaiRepo;
class SdaiEntity;
class SdaiGlobalRule;
class SdaiEntityExtents;
class SdaiEntityInstance;
class SdaiUniquenessRule;
class CATSdaiViolationUR;
class SdaiModelVisitor;

//class CATHDICO (SdaiEntityInstance);
//class CATLISTP (SdaiEntityExtents);
class CATLISTP (SdaiUniquenessRule);
class CATLISTP (CATSdaiViolationUR);


//--------------------------------------------------------------------------------
// ModelType 
// enumeration permettant de connaitre les differents types de modele 
// disponible pour toutes les implementations SDAI
// Uniquement Versant et Ckm pour le moment
//--------------------------------------------------------------------------------
/** @nodoc */
typedef enum // ModelType
{
	CkmTL,     // CKM Repository Volatile 
	VersantTR, // Versant Repository Transactionnel
	RelTR      // SGBDR Repository Transactionnel
} ModelType ;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiModel' represente un ensemble d'instances correspondant a un schema donne
//
//      'SdaiModel' est le super-type de SdaiMOModel, SdaiTLModel et SdaiTRModel dont les
//	definitions restent mysterieuses dans la norme SDAI actuelle
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//ENTITY   sdai_model
//
//	underlying_schema : schema_definition ;	    (* Schema definissant la structure des donnees du modele *)
//	name		  : STRING ;		    (* Nom du modele *)
//	mode		  : OPTIONAL access_type ;  (* Mode courant d'acces au modele *)
//	contents	  : sdai_model_contents ;   (* Instances et Extents du modele, c.a.d. les donnees *)
//	rep		  : sdai_repository ;	    (* Repository auquel appartient le modele *)
//      manager           : SET OF sdai_manager;
//
//UNIQUE
//	UR1		  : rep, name ;		    (* Le nom d'un modele doit etre unique dans un repository *)
//
//END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

/**
 * Class representing a set of SDAI instances corresponding to a given schema.
 */
class ExportedByKS0LATE SdaiModel : public SdaiSessionInstance
{
  friend class CATSdaiRepo;
  friend class SdaiRepoContents;
  friend class SdaiRepo;
  friend class CATSdaiTRSModelDeleting;

  
	/* **************************************************************************************/
	/* C O N S T R U C T O R S								*/
	/* D E S T R U C T O R S								*/
	/* **************************************************************************************/
/** @nodoc */
	SdaiModel ( const SdaiModel& ) ;
/** @nodoc */
	SdaiModel& operator= ( const SdaiModel& ) ;
public:
 void release();
protected:
/** @nodoc */
	SdaiModel ( ) ;

	// constructeur d'un modele valide
/** @nodoc */
	SdaiModel ( const SdaiSchemaH&   sch_def,
		    const SdaiString&    mdl_name,
		    const SdaiAccessMode mode,
		    SdaiModelContentsH&  contents,
		    const SdaiAttrFlag   mode_flag = sdaiUNSET ) ;

	 virtual  ~SdaiModel ( ) ;          //bcc: the virtual is inherited in any case but let's make it obvious

	// ****************************************************************************************
	// A C C E S    F U N C T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
    /**
     * @nodoc
     * sends a visitor to iterate over all the EntityExtents and selected instances.
     * the Visitor will be called on the VisitExtent method for each extent and depending on the
     * return value it will be called on VisitInstance on each instance of this extent.
     * The visit can be stopped at any instance using the return value of VisitInstance.
     * @param iVisitor, the visitor to be accepted
     * @return 0 if the iteration was aborted due to the return value of a call to VisitInstance, 
     * 1 otherwise.
     */
    inline int acceptModelVisitor(SdaiModelVisitor * iVisitor) const
    {
        return Contents()->acceptModelVisitor(iVisitor);
    }
	/**
    * Gets the SdaiSchema corresponding to a SdaiModel.
    */
	const SdaiSchemaH		Underlying_schema	()	const ;
/** @nodoc */
	const SdaiBoolean &		TestUnderlying_schema	()	const ;

	/**
    * Gets the name of a SdaiModel.
	*  @return - the name of the model
    */
	const SdaiString  &		Name			()	const ;
/** @nodoc */
	const SdaiBoolean &		TestName		()	const ;

/** @nodoc */
	const SdaiAccessMode		Mode			()	const ;
/** @nodoc */
	const SdaiBoolean &		TestMode		()	const ;

/** @nodoc */
	const SdaiModelContentsH 	Contents		()	const ;
/** @nodoc */
	const SdaiBoolean &		TestContents		()	const ;

/** @nodoc */
	const SdaiRepoH			Repo			()	const ;
/** @nodoc */
	const SdaiBoolean &		TestRepo		()	const ;

/** @nodoc */
	const SdaiString  &		SchemaName		()	const ;	// Ajout BLC
/** @nodoc */
	const SdaiBoolean &		TestSchemaName		()	const ;	// Ajout BLC

	// ****************************************************************************************
	// S D A I    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
	// Changer le nom du modele 'this'
/** @nodoc */
	void	RenameModel		( const SdaiString& ) ;

	/**
    * Closes a SdaiModel
    */
	virtual	void	CloseModel( ) = 0 ;

	// Rendre permanentes les changements faits dans le modele 'this'
/** @nodoc */
	virtual	void	SaveChanges( )	= 0 ;

	// Annuler tous les changements faits dans au modele 'this' depuis le dernier Load/Save
/** @nodoc */
	virtual	void	UndoChanges( )	= 0 ;

	// Retrouver toutes les instances d'une entite et de ses sous-types dans le modele 'this'
	// attention signature differente de la norme (ajout CVE)
	// ( BLC le 23/01/95 : temporairement mis en virtual pour DRL en attendant )
	// (		     d'avoir la notion de modäle dans les repositories CDM )
	/** @nodoc
    * Gets all instances of a given type (and its sub types) in a SdaiModel.
	*  @return - the list of SdaiEntityInstance
    */
 	virtual const	SDAIAGGRH(SdaiSet,SdaiEntityInstanceH)	GetEntityExtent	( const SdaiString& )	const ; 
/** @nodoc */
	virtual const	SDAIAGGRH(SdaiSet,SdaiEntityInstanceH)	GetEntityExtent	( SdaiEntityH& )  const ;

	// Petit utilitaire simplifiant les methodes GetEntityExtent et GetVolatileExtent
/** @nodoc */
	int GetRankInSchema (const SdaiSchemaH& sch) const;

	// Retrouve toutes les instances d'une entite et de ses sous-types dans le modele 'this'
	// L'aggregat passe en argument (et qu'on retrouve modifie en sortie) est 'volatile',
	// il n'est pas mis a jour lorsqu'on cree ou lorsqu'on detruit de nouvelles instances.
	// Cela permet d'acceder (momentanement) aux instances de l'entite
/** @nodoc */
	virtual void    GetVolatileExtent (SdaiEntityH& entity, SDAIAGGRH(SdaiSet,SdaiEntityInstanceH)& set_of_instances);

	// Permet de supprimer tous les aggregats (ceux associes a l'entite et a ses supertypes)
	// crees lors d'un precedent GetEntityExtent.
	// Une fois la methode ReleaseExtent appelee, on peut acceder a l'ensemble des instances
	// associees a l'entite 'entity' par la methode GetVolatileExtent.
/** @nodoc */
	virtual void	ReleaseExtent (SdaiEntityH& entity);


	// Retrouver la definition d'une entite appartenant au model 'this'
	/**
    * Gets the definition of a type as an entity in a SdaiModel.
	*  @param - The type to describe
	*  @return - The SdaiEntity 
    */
	const  SdaiEntityH            GetEntityDefinition     ( const SdaiString& )   const ;

	// Verifier qu'une regle globale est verifiee sur toutes les instances d'entite de 'this'
/** @nodoc */
	const SdaiLogical&	ValidateGlobalRule ( const SdaiGlobalRuleH& )	const ; 

        /* determine si l'instance est d'un type appele typeName ou de l'un de ses sous-types */
/** @nodoc */
	virtual const SdaiBoolean &   IsKindOf( const SdaiString& iTypeName )  const; // "Model"

        // ajout LBR
	// Uniqueness rule : validation  regle entre 2 modeles
        // ( les instances des 2 modeles sont-elles compatibles ? )
//	const SdaiLogical&	CompareModelInstances ( const SdaiModelH,
//                                                        const SdaiEntityH,
//                                         const SDAIAGGRH(SdaiList,SdaiAttrH) )	const ; 

        // Uniqueness rule : validation globale au sein du modele
        // Remplace le ValidateUniquenessRule qui doit normalement
        // se trouver dans SdaiAppInstance.
/** @nodoc */
	const SdaiLogical& 
	    ValidateUniquenessRule (const SdaiUniquenessRuleH&);

        // Retrouve la liste de tous les UniquenessRules du modele
/** @nodoc */
	    CATLISTP(SdaiUniquenessRule) * GetAllUniquenessRules ();

        // Retrouve une violation a partir de la definition d'un
        // Uniqueness Rule
/** @nodoc */
           CATSdaiViolationUR * GetViolation (const SdaiUniquenessRuleH&);

        // Retrouve l'ensemble des violations (contenant une liste d'anomalies
        // non vide) sous forme d'une liste de pointeurs 
/** @nodoc */
	   CATLISTP(CATSdaiViolationUR) * GetAllViolationsUR ();


        // Retrouve l'Entity Extent associee a une entite donnee
/** @nodoc */
	    SdaiEntityExtentsH GetExtent (const SdaiEntityH&); 

	// ****************************************************************************************
	// D S    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
        // Abonnements / Desabonnements aux classes   (ajout d'evenements sur classes (projet mbd)) 
/** @nodoc */
	void AddCallback ( SdaiEventId evt,
			   SdaiRootH ToCall,
			   WakeUpFonction Fonc,
			   const SdaiString& ClassName,
			   const SdaiString& AttrName = NULL_SDAI_STRING);

/** @nodoc */
	void RemoveCallback ( SdaiEventId evt,
			      SdaiRootH ToCall,
			      WakeUpFonction Fonc,
			      const SdaiString& ClassName,
			      const SdaiString& AttrName = NULL_SDAI_STRING);

        // Recuperer l'Uuid d'un model
/** @nodoc */
	int Uuid(unsigned char u_bits[16]);
	
	// Recuperer le Relative Name d'une AppInstance
/** @nodoc */
	virtual int GetAppRelativeName ( const SdaiAppInstanceH Instance,
					 const void * & RelativeName,
					 int & NbBytes) const ;
					 
	// Recuperer un Hint sur une AppInstance pour la construction de liens symboliques
/** @nodoc */
	virtual int GetSLinkHint ( const SdaiAppInstanceH Instance,
				   const void * & Hint,
				   int & NbBytes) const ;					 
	
	// Savoir si un modele a ete modifie (1 modifie, 0 non modifie)
	/**
    * Tests if a SdaiModel has been modified
	*  @return 1 if Model has changed, 0 else. 
    */
	int  IsChanged() const;

	// Remettre a 0 le flag de modification du model
/** @nodoc */
	int  ResetChange();
 
 	// ****************************************************************************************
	// D S    O P E R A T I O N    (public but private)
	// ****************************************************************************************
        // Connaitre le type d'un modele
//        virtual ModelType   GetModelType()	const	= 0 ;

/** @nodoc */
        inline CATSdaiModel * Model() const { return _Model; }

	// ****************************************************************************************
	// I M P L E M E N T A T I O N
	// ****************************************************************************************

#ifdef SDAI_MULTI_TRANS_BCC
  /**
   * This is used to determine if this SdaiModel has Copy-On-Write enabled.
   */
  SdaiRoot::COWSupport COWing() const;
/** @nodoc */
  void enableCOW();
/** @nodoc */
  void disableCOW();
/** @nodoc */
  void ConfirmExtents();
#endif
protected :
	// Pointeur sur implementation
/** @nodoc */
        CATSdaiModel * _Model;


} ;

#endif	/* _SDAI_MODEL_H_ */

