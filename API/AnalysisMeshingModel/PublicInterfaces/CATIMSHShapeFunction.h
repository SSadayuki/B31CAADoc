#ifndef  CATIMSHShapeFunction_h
#define  CATIMSHShapeFunction_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U4 CATMSHExtIShapeFunction 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATMSHConnectivity;

/**
 * @nodoc
 */
enum CATMSHIntegrationType
{
   CATMSHIntegrationNone =-1,
   CATMSHCentroid        =0,
   CATMSHLowPrecision    =1,
   CATMSHMediumPrecision =2,
   CATMSHHighPrecision   =3
};

/**
 * @nodoc
 */
struct CATMSHIntegrationScheme 
{
  int      NbPoints;
  double * Parameters;
  double * Weights;
};

/**
 * @nodoc
 */
struct CATMSHFunctionsInfos
{
  short Dimension;
  short NbFunctions;
};

extern ExportedByMSHModel IID IID_CATIMSHShapeFunction;

/**
 * Interface representing a shape function.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHShapeFunction : public CATBaseUnknown
{
  CATDeclareInterface;

// Méthodes et données membres publiques

public: 

/**
 * @nodoc
 * Lecture des infos des fonctions de forme
 */
  virtual const CATMSHFunctionsInfos * GetFunctionsInfos () const = 0;

/**
 * @nodoc
 * Evaluation des fonctions de forme a partir d'un parametre sur l'element
 */
  virtual HRESULT EvalFunctions ( const double * Parameters,
                                  double * Functions ) const = 0;

/**
 * @nodoc
 * Evaluation des derivees des fonctions de forme a partir d'un parametre sur l'element
 */
  virtual HRESULT EvalDerivateFunctions ( const double * Parameters,
                                          double * Derivates ) const = 0;

/**
 * @nodoc
 * Troncature d'un parametre sur les limites parametriques
 */
  virtual HRESULT ClipParameters ( const double Parameters[],
                                   double ClippedParameters[],
                                   int &Clip ) const = 0;

/**
 * @nodoc
 * Lecture des parametres des noeuds
 */
  virtual const double * GetNodesParameters () const = 0;

/**
 * @nodoc
 * Lecture d'un schema d'integration
 */
  virtual const CATMSHIntegrationScheme * GetIntegrationScheme ( CATMSHIntegrationType Type ) const = 0;
};

CATDeclareHandler ( CATIMSHShapeFunction, CATBaseUnknown );

#endif
