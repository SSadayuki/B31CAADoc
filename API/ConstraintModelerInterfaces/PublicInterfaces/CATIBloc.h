#ifndef CATIBloc_h
#define CATIBloc_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
/*

Cette interface concerne deux objets: les blocs et les contraintes.

Les blocs sont structures en une arborescence connexe. Chaque bloc a une liste 
de blocs fils sauf les blocs feuilles qui n'ont pas de blocs fils. Tous les
blocs on exactement un bloc pere sauf le bloc racine qu n'en a pas. Le bloc
racine est unique.

De plus, chaque bloc peut posseder une liste de contraintes. Les contraintes ne 
sont pas partagees entre les blocs. Autrement dit, chaque contrainte a exactement 
un seul bloc pere.

Enfin, une contrainte pointe sur deux blocs. Son bloc proprietaire est calcule
automatiquement a partir des blocs pointes et de la structure arborescente par 
un algorithme d'une incroyable efficacite. On appelle les pattes de la contrainte
ces deux blocs pointes. Il n'y a pas de restriction sur le partage des blocs
pointes par les contraintes: des contraintes peuvent avoir des pattes communes.

Les methodes qui suivent concernent la navigation dans la structure arborescente
des blocs munis de leurs contraintes. Du point de vue de l'application 
mecanique, les blocs representent un emboitement de groupes d'objets rigides 
mobiles. Les contraintes positionnent ces groupes les uns par rapport aux autres.

*/

#include "CATConstraintModelerItf.h"
#include "CATBaseUnknown.h"
#include "CATICst.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATCstDefs.h"
#include "CATBlocDefs.h"
#include "CATIDomain.h"
#include "CATMathTransformation.h"

class CATICst_var;
class CATIBloc_var;

#include "CATLISTV_CATICst.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATIBloc;
#else
extern "C" const IID IID_CATIBloc;
#endif


/**
 * @deprecated V5R15
 * Use equivalent methods of CATIBlock if specified, do not use elsewhere
 * Interface to manage blocs.
 * <b>Role</b>: This interface is used to manage blocs.
 *
 * @ nodoc.
 * Cette interface concerne deux objets: les blocs et les contraintes.
 * Les blocs sont structures en une arborescence connexe.
 * Chaque bloc a une liste de blocs fils sauf les blocs feuilles qui n'ont pas   * de blocs fils.
 * Tous les blocs on exactement un bloc pere sauf le bloc racine qui n'en a pas.
 * Le bloc racine est unique.
 * De plus, chaque bloc peut posseder une liste de contraintes.
 * Les contraintes ne sont pas partagees entre les blocs.
 * Autrement dit, chaque contrainte a exactement un seul bloc pere.
 * Enfin, une contrainte pointe sur deux blocs. 
 * Son bloc proprietaire est calcule automatiquement a partir des blocs pointes
 * et de la structure arborescente par un algorithme d'une incroyable efficacite
 * On appelle les pattes de la contrainte ces deux blocs pointes. 
 * Il n'y a pas de restriction sur le partage des blocs pointes par les 
 * contraintes: des contraintes peuvent avoir des pattes communes.
 * Les methodes qui suivent concernent la navigation dans la structure
 * arborescente des blocs munis de leurs contraintes.
 * Du point de vue de l'application mecanique, les blocs representent un 
 * emboitement de groupes d'objets rigides mobiles.
 * Les contraintes positionnent ces groupes les uns par rapport aux autres.
 * @see CATICst
 */
class ExportedByCATConstraintModelerItf CATIBloc: public CATBaseUnknown
{
   CATDeclareInterface;

public :
 
/**
 * Adds a constraint to be solved on this bloc.
 * @param iCst
 * The constraint.
 * @nodoc
 * Ajout d'une contrainte au bloc "this". 
 * Le bloc "this" devient proprietaire de la contrainte. 
 * Le pointage des contraintes vers les blocs est fait par la creation de
 * contraintes. 
*/
   virtual void AddCst(CATICst_var iCst) =0;

/**
 * Returns the list of the contraints solved on this bloc.
 * @nodoc
 * Une contrainte de type longueur ou rayon est interne a l'element contraint
 * parce qu'elle resolue au niveau de l'element contraint.
*/
   virtual CATLISTV(CATBaseUnknown_var) ListCsts() const=0;

/**
 * Returns the list of the constraints solved on this bloc and its subtree.
 * @nodoc
 * Une contrainte de type longueur ou rayon est interne a l'element contraint
 * parce qu'elle resolue au niveau de l'element contraint.
*/
   virtual CATLISTV(CATBaseUnknown_var) ListInternalCsts() const=0;

/**
 * @nodoc
 * Liste de toutes les contraintes qui ont une patte dans le sous arbre vu
 * du bloc "this" et une patte hors de ce sous arbre. La seconde liste en 
 * argument est celle des pattes hors sous arbre.
 * Appellee sur un bloc feuille, cette methode permet de trouver toutes les
 * contraintes posees sur un element.
 * Si le troisieme argument "elem2" est renseigne, la methode rend la liste 
 * des contraintes qui ont une patte dans le sous arbre vu du bloc "this" 
 * et une patte sur "elem2".
 * Les contraintes de type reference, parallele ou perpendiculaire a un axe
 * sont des contraintes mono element. Elles sont externes a l'element contraint 
 * parce qu'elles sont resolues par le bloc pere de l'element contraint. 
 * Une contrainte de type longueur ou rayon est interne a l'element contraint
 * parce qu'elle est resolue au niveau de l'element contraint.
 * Si le bloc "this" est contraint par une fixite un parallelisme ou une 
 * perpendicularite par rapport a un axe, NULL_var figure dans la 
 * liste des elements a la position correspondant a celle ce la fixite dans
 * la liste des contraintes.
 */
   virtual CATLISTV(CATBaseUnknown_var) ListExternalCsts(
      CATLISTV(CATBaseUnknown_var)& oElems, 
      CATBaseUnknown_var iElem2 = NULL_var) const=0;
     
/**
 * @nodoc
 * Fixe ou pas un bloc. La notion de fixite est relative au bloc pere. Un
 * bloc B est fixe par rapport a tous ses blocs freres. Si son bloc pere 
 * n'est pas fixe et si il bouge, il entraine avec lui le bloc B.
 * Une autre maniere de fixer un bloc consiste a le contraindre au moyen
 * d'une contrainte de type CstType_Reference. L'usage de la contrainte
 * est recommande.
 */
   virtual CATBlocFix IsFixed() const=0;

/**
 * @nodoc
 */
   virtual void SetFixed(const CATBlocFix iFix) =0;

/**
 * @nodoc
 * Un bloc est rigide par defaut. C'est a dire qu'une contrainte externe 
 * aura pour effet de le deplacer et non pas de le deformer. Seules les 
 * contraintes internes a un bloc rigide ont le pouvoir de le deformer.
 * Deformer un bloc, c'est deplacer ses blocs fils les uns par rapport 
 * aux autres.
 * Un bloc non rigide (on dit aussi mou) est neutre vis a vis du
 * comportement des contraintes. Tous se passe comme si ses blocs fils
 * etaient rattaches directement a son bloc pere rigide. Cette notion 
 * permet de grouper-disperser-regrouper des objets dans avoir a perturber
 * la structure arborescente des blocs. 
 * L'affectation des contraintes aux blocs proprietaires n'est pas perturbee 
 * par la presence d'un bloc mou. Le solveur de contraintes en tiendra compte 
 * lors de la collecte des contraintes a resoudre au niveau d'un bloc
 * donne. 
 */
   virtual CATBlocRigid IsRigid() const=0;

/**
 * @nodoc
 */
   virtual void SetRigid(const CATBlocRigid rigid) =0;

/**
 * @deprecated V5R15
 * do not use
 * Adds a subbloc.
 * @param iBloc
 * The subbloc.
 */
   virtual void AddBloc(CATIBloc_var iBloc) =0;

/**
 * @deprecated V5R15
 * Use CATIBlock::ListBlocks
 * Returns the list of subblocs.
 */
   virtual CATLISTV(CATBaseUnknown_var) ListBlocs() const=0;

/**
 * @deprecated V5R15
 * do not use
 * Returns the list of blocs in the subtree.
 */
   virtual CATLISTV(CATBaseUnknown_var) ListInternalBlocs() const=0;

/**
 * @deprecated V5R15
 * Use CATIBlock::GetParentBlock
 * Returns the parent bloc.
 */
   virtual CATIBloc_var GetFatherBloc() const=0;

/**
 * @deprecated V5R15
 * do not use
 * Returns the parent bloc and all its grandparents.
 */
   virtual CATLISTV(CATBaseUnknown_var) ListFatherBlocs() const=0;

/**
 * @deprecated V5R15
 * do not use
 * Unsets the parent bloc.
 */
   virtual void UnsetFatherBloc() =0;

/**
 * @deprecated V5R15
 * do not use
 * Solves the bloc.
 * @param iDomain
 * Equals to NULL_var.
 */
   virtual int  Solve(CATIDomain_var iDomain=NULL_var) =0;

/**
 * @deprecated V5R15
 * do not use
 * Solves the bloc.
 * @param iListOfCsts
 * The list of constraints to be solved. 
 * @param iDomain
 * Equals to NULL_var.
 */
   virtual int  Solve(CATLISTV(CATICst_var) iListeOfCsts,  
                      CATIDomain_var iDomain=NULL_var) =0;
                     
/**
 * @nodoc
 * Calcul de la composante connexe du graphe des contraintes qui contient this.
 * ListC est la liste de contraintes de cette composante connexe. 
 * ListE est la liste des elements contraints de cette composante connexe.
 * Par definition de la connexite, pour tout element X de ListE, 
 * il existe une chaine de contraintes de ListC reliant X et this.
 * Il n'y a pas de correspondance entre les deux listes ListC et ListE.
 * Elles n'ont pas, en general, la meme taille.
 */
   virtual void ListConnectedCsts(
      CATLISTV(CATBaseUnknown_var)& oListOfCsts,
      CATLISTV(CATBaseUnknown_var)& oListOfElems) const=0;

/**
 * @nodoc
 * Meme chose que precedemment, mais les contraintes mesures sont ignores.
 */
   virtual void ListConnectedDrivingCsts(
      CATLISTV(CATBaseUnknown_var)& oListOfCsts,
      CATLISTV(CATBaseUnknown_var)& oListOfElems) const=0;

/**
 * @deprecated V5R15
 * do not use
 * Retrieves the list of the contraints defined on an element.
 * @param iMode
 * The mode.
 * @param iNum
 * The number of constraint elements.
 * @param oListOfElems
 * The constrained elements.
 * @param iElem2
 * Another element constrained by one of constraint of the current element.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetCstsOnElement(
      const CATCstMode iMode, 
      const int iNum, 
      CATLISTV(CATBaseUnknown_var)& oListOfElems,
      const CATBaseUnknown_var& iElem2 = NULL_var) const=0;

/**
 * @deprecated V5R15
 * do not use
 * Retrieves the list of constraints defined on a element.
 * @param iMode 
 * The mode.
 * @param oListOfElems
 * The constrained elements.
 * @param iElem2
 * Another element constrained by one of constraint of the current element.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetCstsOnElement(
      const CATCstMode iMode, 
      CATLISTV(CATBaseUnknown_var)& oListOfElems,
      const CATBaseUnknown_var& iElem2 = NULL_var) const=0;

/**
 * @deprecated V5R15
 * do not use
 * Retrieves the list of constraints defined on a element.
 * @param iNum
 * The number of elements.
 * @param oListOfElems 
 * The constrained elements.
 * @param iElem2
 * Another element constrained by one of constraint of the current element.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetCstsOnElement(
      const int iNum, 
      CATLISTV(CATBaseUnknown_var)& oListOfElems,
      const CATBaseUnknown_var& iElem2 = NULL_var) const=0;

/**
 * @deprecated V5R15
 * do not use
 * Retrieves the list of contraints defined on a element.
 * @param oListOfElems
 * The constrained elements.
 * @param iElem2
 * Another element constrained by one of constraint of the current element.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetCstsOnElement(
      CATLISTV(CATBaseUnknown_var)& oListOfElems,
      const CATBaseUnknown_var& iElem2 = NULL_var) const=0;

private:
};

CATDeclareHandler(CATIBloc, CATBaseUnknown);

#endif
