#ifndef CATITPS3DGeoVisu_H
#define CATITPS3DGeoVisu_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATIVisu.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPS3DGeoVisu ;
#else
extern "C" const IID IID_CATITPS3DGeoVisu ;
#endif

/**
 * Interface that drives specific visualization behaviour of
 * feature within a tolerancing context.
 *
 * For instance, this interface is the only way to build a
 * visual representation for TTRS features that do not implement
 * the general visualization behaviour (CATI3DGeoVisu)
 */
class ExportedByCATTPSItfCPP CATITPS3DGeoVisu: public CATIVisu
{
  CATDeclareInterface;
  public :

};
#endif
