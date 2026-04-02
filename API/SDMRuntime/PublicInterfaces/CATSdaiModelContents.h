/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef	_CAT_SDAI_MODEL_CONTENTS_H_
#define	_CAT_SDAI_MODEL_CONTENTS_H_


#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// Implementation SdaiModelContents
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

#include <SdaiMacro.h>
#include <SdaiString.h>
#include <CATCollec.h>

class SdaiSet;
class SdaiEntityExtents;
class SdaiEntityInstance;
class CATLISTP(SdaiEntityExtents);
class CATLISTP(SdaiEntityInstance);
class SdaiModelContents;
class SdaiModelVisitor;
class CATSDMBinary;
class SdaiModel;
class ExportedByKS0LATE CATSdaiModelContents
{
    friend class SdaiModelContents;
    friend class CATSDMBinary;
    friend class SdaiEntityExtents;
    friend class CATSdaiRollArea;
	// ****************************************************************************************
	// C O N S T R U C T O R S
	// D E S T R U C T O R S
	// ****************************************************************************************
	CATSdaiModelContents ( const CATSdaiModelContents& );
	CATSdaiModelContents& operator= ( const CATSdaiModelContents& );
public :
	CATSdaiModelContents ( const SdaiSchemaH& , const SdaiModel *);

	~CATSdaiModelContents ();

	// ****************************************************************************************
	// S D A I    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
	// Ajouter une instance d'entite au contenu d'un modele
		void		AddInstance ( SdaiEntityInstanceH& , int = 0);

	// Retire une instance d'entite du contenu d'un modele
		void		RemoveInstance ( SdaiEntityInstanceH& , int = 0);
    //reset the list of instances ordered by their #ele so it will be recomputed when needed
    void resetInstanceLists();
    // ****************************************************************************************
	// D S    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public:
	// Fonction d'acces au nombre absolu d'instances crees  - Ajout CCT -
    // TODO check where this is used, probably need to be context sensitive
	        unsigned int                            GetInstanceCount()      const;

	// Fonction d'acces au nombre absolu d'instances crees  - Ajout CCT -
    // TODO check where this is used, probably need to be context sensitive
                void                                    SetInstanceCount( unsigned int );

	// Fonction de recuperation des instances d'une entite et de tous ses sous-types
	 const	SDAIAGGRH(SdaiSet,SdaiEntityInstanceH)	GetEntityExtent	( const SdaiEntityH&, int ); 

	// Fonction de creattion d'un nouvel entity extent au model contents
	 void	AddEntityExtents	( const SdaiEntityH& , int = 0 ) ; 

	// Nettoyage du modele
	void	CloseModelContents();

	// retrieve instance from #ele (cf. CATSdaiEntityInstance::GetInstanceName)
	SdaiEntityInstanceH RetrieveInstance(int iId);

	// retrieve extents from the rank in the schema
    // if you don't understand what it does please do not use it or you'll
    // get burned when it changes.
    // this is reserved for the use of CATSdai* classes!!!!
	SdaiEntityExtents* RetrieveExtentFromPosition(int iId);

    /**
     * @nodoc
     * retrieves an entityextent from the entity
     * @param entity the entity for which an entityextent is required
     * @param iRankInSchema the rank in the entity schema of the model
     * @return the entityextent or null if none exists
     */
    SdaiEntityExtentsH GetExtent (const SdaiEntityH& entity, int iRankInSchema);
	/* Methode renvoyant le nom en clair de la classe ou de l'instance */
	static  const SdaiString &      LeType(); /*"ModelContents" */

	// ****************************************************************************************
	// I M P L E M E N T A T I O N
	// ****************************************************************************************
private:
//bcc:  I've made all the family jewels private, this .h is in ProtectedInterfaces and having all
//the datamembers public looks like exhibitionism to me
	// Nombre absolu d'instances crees  - Ajout CCT -
	unsigned int			                absolute_instance_count_;

	// liste des entity extents (mise a jour lors de l'acces) 
   	SDAIAGGRH(SdaiSet,SdaiEntityExtentsH) 		folders_;

    //TODO: implement COW here (aggregate of populated folders)  this is not of high priority since this method is used mostly in import export scenarii.
	// liste des entity extents non vide (mise a jour a chaque acces) 
   	SDAIAGGRH(SdaiSet,SdaiEntityExtentsH) 		populated_folders_;

    //FIXME: implement COW here (list global of all instances)
	// liste de toutes les instances (= entity extent de AppInstance)
	SDAIAGGRH(SdaiSet,SdaiEntityInstanceH) 		ent_ext_;

	// pareil mais dans l'ordre des #ele
    // NOTE: this is only usefull in file context for the locator in ObjectModelerSDM, in this case, there should not be any context support.
	CATLISTP(SdaiEntityInstance) *			list_inst ;    // liste des instances par numero. Note also that this list contains non-addref()ed objects.

public: //bcc: I don't like this public but it shouldn't hurt as much as the other data members which were exposed
    
    SdaiSchemaH  _schema;
	// liste interne des entity extents (un pour chaque entite du schema) 
	CATLISTP(SdaiEntityExtents) *			internal_folders_;          //FIXME make private when visitor is deployed
    inline void invalidateFolders()
    {
        is_folders_valid_ = 0;
    }
    inline void validateFolders()
    {
        is_folders_valid_ = 1;
    }
    inline int checkFoldersValidStatus()
    {
        return is_folders_valid_;
    }

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
    int acceptModelVisitor(SdaiModelVisitor * iVisitor) const;


    void ConfirmExtents();
  
private:
	// flag permettant de savoir si le set folders_ est a jour
	unsigned char					is_folders_valid_;      //bcc: should really be a bit field but it wouldn't change 
                                                            //anything as long as we don't have any other flags

  const SdaiModel *owner_;
public:
  const SdaiModel *owner() const { return owner_; }
};

inline  const SdaiString &	TypeName( const SdaiModelContentsH *)
                  {  return CATSdaiModelContents::LeType();}

                  

#endif	/* _CAT_SDAI_MODEL_CONTENTS_H_ */







