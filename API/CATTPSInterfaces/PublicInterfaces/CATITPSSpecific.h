#ifndef CATITPSSpecific_H
#define CATITPSSpecific_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATDataType.h"

class CATPathElement;
class CATBody;
class CATDocument;
class CATIUnknownList;

extern "C" const IID IID_CATITPSSpecific;

/**
 * Interface to specific V4 services.
 * <b>Role</b>: This interface provide access to some specific services.
 */

class CATITPSSpecific : public IUnknown
{
  CATDeclareInterface;

  public:

    /** @nodoc */
    virtual void SDCSgcwtrr (
                         int* MNUM, int* JELE, 
                         int* N_ITOPO, int* ITOPO,
                         double* SAG, double* STEP, 
                         double* POINTS, int* IALPTS, CATINTPTR* IOFPTS, int* NBPTS,
                         double* NORMAL, int* IALNOR, CATINTPTR* IOFNOR, int* NBNOR,
                         double* TRIANG, int* IALTRI, CATINTPTR* IOFTRI, int* NBTRI,
                         double* I4TRA , int* IALTRA, CATINTPTR* IOFTRA, int* NBTRA,
                         double* I4RAC , int* IALRAC, CATINTPTR* IOFRAC, int* NBRAC,
                         int* IER) = 0;

    /** @nodoc */
    virtual void SDCSgiares (int* ialsom, int* ier) = 0;

    /** @nodoc */
    virtual void SDCSgisrgb (int* mnum, int* iexist, int* ier) = 0;

    /** @nodoc */
    virtual void SDCSgidrgb (int* mnum, int* ier) = 0;

    /** @nodoc */
    virtual int  SDCSgscted (const int *mnum_, const int *jed_, int *jtcv_,
                             int *ifind_, int *ier_) = 0;

    /** @nodoc */
    virtual void SDCSautfon() = 0;

    /** @nodoc */
    virtual void SDCSautfof() = 0;

    /** @nodoc */
    virtual int CATImplementationCATIAGetReferenceJele(
                                                   CATBaseUnknown * iElem) = 0;

    /** @nodoc */ 
    virtual CATBaseUnknown * SDCSCATIABindInterface (int jele, 
                                                 const GUID& iid,
                                                 int mnum = 1) = 0;

    /** @nodoc */
    virtual int GetJeleFromV4SolidSelection (CATBaseUnknown * iElem) = 0;

    /** @nodoc */
    virtual int GetJeleFromV4SolidSelection (CATBaseUnknown * iElem,
                                             CATPathElement * iPath,
                                             int& oSolidJele) = 0;

    /** @nodoc */
    virtual int SDCSgusrea (const int *numpil_, const int *numelt_,
                            void *elemnt_, int *ier_) = 0;

    /** @nodoc */
    virtual int SDCSgusend(int *numpil_, int *ier_) = 0;

    /** @nodoc */
    virtual void SDCSrecfon(const int &igra, int &igrfon, int &itpfon) = 0;

    /** @nodoc */
    virtual void SDCSfacsurf2 (int *surf, int *pileface, int *nbface) = 0;

    /** @nodoc */
    virtual CATPathElement* GetPathElementFromV4FaceJele (
                           const int iJele, 
                           const int iSolidJele,
                           CATPathElement* iProductInstanceContext = NULL) = 0;

    /** @nodoc */
    virtual CATPathElement* GetPathElementFromV4EdgeJele (
                           const int iJele, 
                           const int iSolidJele,
                           CATPathElement* iProductInstanceContext = NULL) = 0;

    /** @nodoc */
    virtual CATPathElement* GetPathElementFromV4WireframeEntity (
                           const int iJele,
                           CATPathElement* iProductInstanceContext = NULL) = 0;

    /** @nodoc */
    virtual CATPathElement * GetPathElementFromFDT (
                                                CATBaseUnknown * iElement) = 0;

    /** @nodoc */
    virtual HRESULT GetDuplicatedElement (CATPathElement * iSelectionPath,
                                          CATBody ** oBody) = 0;

    /**
     * @nodoc
     * Retrieves the corresponding CATPathElements of a Fsur, 
     * containing CATSolFsur/CATModelSurface, Solide, Geometrical Set, Master.
     * The elements of the *oList need to be cast in (CATPathElement*).
     * The *oList must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetEquivalentPathElts (CATBaseUnknown  *  ipFsur,
                                           CATIUnknownList ** opList) = 0;

};
#endif
