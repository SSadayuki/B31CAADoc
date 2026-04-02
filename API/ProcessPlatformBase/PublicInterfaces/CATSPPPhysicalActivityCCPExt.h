// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
//
// CATSPPPhysicalActivityCCPExt : --EXTENSION--
// <explain concisely class main purpose and nature>
//
//=============================================================================
// Usage Notes:
//
//        ATTENTION: CE HEADER EST EXPOSE PROVISOIREMENT EN PROTECTEDINTERFACES
//                   POUR UN BESOIN DU MANUFACTURING
//                   MERCI AU AUTRES APPLIS QUI VOUDRAIENT EN DERIVER
//                   D'INFORMER PMM OU PCM AVENT.
//
//
//
// <describe here how you intend this class to be used>
//=============================================================================
// May. 98   Creation                                   P. Motte
// Feb 2007	 Expose to PublicInterfaces for CAA			gny
//=============================================================================

/** 
* @CAA2Level L0
* @CAA2Usage U2 
*/

#ifndef CATSPPPhysicalActivityCCPExt_H
#define CATSPPPhysicalActivityCCPExt_H

#include "SP0BBOSM.h"
#include "CATSPPActivityCCPExt.h"

//-----------------------------------------------------------------------------
class ExportedBySP0BBOSM CATSPPPhysicalActivityCCPExt : public CATSPPActivityCCPExt
{
  public:
  
    CATDeclareClass ;
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------
    CATSPPPhysicalActivityCCPExt();
    virtual ~CATSPPPhysicalActivityCCPExt();

    //-----------------------------------
    // CATICutAndPastable interface
    //-----------------------------------

  virtual ListOfVarBaseUnknown Paste(ListOfVarBaseUnknown & object_to_copy,
                                     ListOfVarBaseUnknown * to_cur_objects = NULL,
                                     const CATFormat * an_imposed_format = NULL);
  virtual int Create(CATBaseUnknown_Associations & association_of_objects,
                     const CATFormat * an_imposed_format);
  virtual int Update(CATBaseUnknown_Associations & ioAssociationOfObjects,
                     const CATFormat * iAnImposedFormat=NULL,
                     ListOfVarBaseUnknown * iToCurObjects=NULL);
  virtual int BoundaryExtract(ListOfVarBaseUnknown & objects_already_in_boundary,
                              const ListOfVarBaseUnknown * objects_to_add = NULL,
                              const CATFormat * an_imposed_format = NULL) const;
  virtual int BoundaryRemove(ListOfVarBaseUnknown & objects_already_in_boundary,
                             const ListOfVarBaseUnknown * objects_to_remove = NULL,
                             const CATFormat * an_imposed_format = NULL);

    protected:
    
  // Pour la gestion du Drag'n'Drop d une activité sur une de ses filles :
  // Situation par défaut :
  //   + l activité parente est appelée sur le BoundaryRemove par un CanCut
  //   + l activité est copiée
  //   + la copie de l activité est collée sur la destination
  //   + l activité initiale est supprimée (le Drag'n'Drop est l équivalent d un Cut+Paste)
  // Problemes :
  //   + l activité initiale est détruite avec toute sa déscendence
  //   + on peut détecter le problème au niveau du D'n'D, mais cela dépend du workbench est de l objet actif
  //   + on ne peut détecter le problème dans le Cut-Copy-Paste qu qu moment du Coller
  // Solution :
  //   + Faire échouer le Coller en cas de détection d un tel problème :
  //     - Dans le Paste, on vide la liste des objets à copier, information qui remonte
  //       jusqu au D'n'D qui considère que le Paste a échoué et interdit le Cut
  //     - Voir info complète ailleurs

  static int _DnDActiveDnDTransaction;
  static int _DnDCurrentTransactionNb;
  static ListOfVarBaseUnknown _DnDCurrentToBeCutObjects;
  static boolean ForbidThisPaste(const ListOfVarBaseUnknown *);

};
#endif
