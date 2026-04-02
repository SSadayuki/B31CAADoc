/* -*-c++-*- */
#ifndef CATIEdgeFillet_H
#define CATIEdgeFillet_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIFillet.h>
#include <CATPrtEnum.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATISpecObject.h>

class CATICkeParm_var;
class CATPointOnCurve_var;
class CATCurve_var;
class CATEdge_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIEdgeFillet;
#else
extern "C" const IID IID_CATIEdgeFillet;
#endif

/**
 * Interface to represent the edge fillet shape with a constant radius or
 * a variable radius.
 * <b>Role</b>: The resulting shape is made up of either
 * constant edge fillets built with a constant radius, 
 * variable edge fillets defined by radius/vertex pairs. 
 */
class ExportedByPartItf CATIEdgeFillet : public CATIFillet
{
  CATDeclareInterface;

  public:
    /**
     * Sets the edge fillet constant radius.
		 * <br><b>Precondition</b>: only for edge fillets with a constant radius.
	   * @param iRadius
		 * Specifies the constant radius value.
		 * <br><b>Legal values</b>: The radius value must be greater 
     * than 0 but not equal to 0. 
		 */
  virtual void ModifyRadius(double iRadius) = 0;

    /**
     * Sets the fillet radius on an imposed vertex of a variable edge fillet.
		 * <br><b>Precondition</b>: only for edge fillets with a variable radius.
     * A radius/vertex pair is made up of a vertex associated with a radius.
     * @param iVertex
     * Specifies the vertex which the radius to be modified.
		 * The vertex should be a point, a plane (intersecting edges)  
		 * or a CATIMfPointOnEdge feature belonging to the fillet.  
     * @param iRadius
     * The radius to be modified.
		 * <br><b>Legal values</b>: The radius value must be greater 
     * than or equal to 0. 
		 */
  virtual void ModifyRadiusOnVertex(CATISpecObject_var iVertex,double iRadius) = 0;

	  /**
     * Sets the propagation mode of the elements to be filleted.
     * @param iPropagation 
		 * The propagation mode specifies the edges taken into account when filleting.
     * <br>The propagation can be performed in two ways:
     * <br><b>Tangency</b>:CATIA continues filleting beyond the selected edge 
		 * until it encounters an edge that is non continuous in tangency.
     * <br><b>Minimal</b>: the propagation is done up to the first natural relimitation
		 * by the geometry.
		 * <br><b>Legal values</b>: the CATPrtFilletPropagation propagation mode can be set
		 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
		 */
  virtual void ModifyPropagation(CATPrtFilletPropagation iPropagation) = 0;

    /**
     * Sets the edge fillet radius variation mode.
		 * <br><b>Precondition</b>: only for edge fillets with a variable radius.
     * @param iVariation 
		 * The variation mode specifies the way the fillet shape changes
     * from one radius to another.
     * <br>The variation can be performed in two ways:
     * <br><b>Cubic</b>: the fillet changes smoothly from one
     * radius to another.
     * <br><b>Linear</b>: the fillet changes straight from one
     * radius to another.;
		 * <br><b>Legal values</b>: the CATPrtFilletVariation variation mode can be set
		 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 		 */
	virtual void ModifyVariation(CATPrtFilletVariation iVariation) = 0;

    /**
     * Adds elements to be filleted.
 		 * <br><b>Postcondition</b>: It just adds the elements to the fillet. So 
		 * for variable radius edge fillet, you have to use AddFilletRadius  
		 * method on the edge to add vertices for computing variable fillet.
     * @param iObjectList
     * Specifies the list of sharp edges or faces to be filleted.
     * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
		 * created with CATIMmiBRepFactory. 
		 * This edge or face should not be already used in the fillet.
		 * This edge or face should belong to the same mechanical body.
	   */
  virtual void AddObject(CATLISTV(CATISpecObject_var) iObjectList) = 0;

    /**
     * Removes elements from those to be filleted.
     * @param iObjectList
     * Specifies the list of edges or faces to be removed.
     * The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature. 
		 * This edge or face should belong to the fillet.
	   */
  virtual void RemoveObject(CATLISTV(CATISpecObject_var) iObjectList) = 0;

   /**
     * Adds new radius/vertex pairs.
 		 * <br><b>Precondition</b>: only for edge fillets with a variable radius.
 		 * If you want to add an edge, use AddObject method before.  
     * @param iObject
     * Specifies the edge to be filleted or the vertex where to impose the radius.
		 * <br> The edge should be a Feature Redge (CATIMfRedge) used in AddObject method.
		 * <br> The vertex should be a point, a plane or a feature CATIMfPointOnEdge. 
		 * The feature PointOnEdge should be created using CATIMmiBRepFactory and
		 * should use a Feature Redge belonging to the fillet. 
     * @param iRadius
     * In case of edges, the radius to impose along the edge. 
		 * This radius is imposed at both end points of the edge.
		 * <br> In case of vertices, the radius to impose at the given vertex
	   */
  virtual void AddFilletRadius(CATISpecObject_var iObject, double iRadius, const CATISpecObject_var &iParm = NULL_var) = 0;

    /**
     * Removes a radius/vertex pair from those to be defined.
     * @param iVertex
     * Specifies the vertex where the radius is defined to be removed.
 		 * The vertex should be a point, a plane or a feature CATIMfPointOnEdge. 
 		 * This vertex should belong to the fillet.
		 */
  virtual void RemoveFilletRadius(CATISpecObject_var iVertex) = 0;

    /**
     * Adds edges that must not be modified during the fillet operation.
     * <br><b>Precondition</b>: only for edge fillets with constant radius. 
     * @param iKeepEdgeList
     * Specifies the list of sharp edges that must not be modified. 
     * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature
		 * created with CATIMmiBRepFactory. 
		 * This edge should not be already used in the fillet.
		 * This edge should belong to the same mechanical body.
	   */
  virtual void AddKeepEdge(CATLISTV(CATISpecObject_var) iKeepEdgeList) = 0;

    /**
     * Removes edges from those to be not modified.
     * @param iKeepEdgeList
     * Specifies the list of edges to be removed. 
     * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature.
		 * This edge should belong to the fillet.
	   */
  virtual void RemoveKeepEdge(CATLISTV(CATISpecObject_var) iKeepEdgeList) = 0;

	  /**
     * Returns the fillet type.
		 * The fillet type specifies the ways the fillet is defined.
     * <br>The fillet type can be :
     * <br><b>Constant</b>: the constant edge fillet is built with a constant radius, .
     * <br><b>Variable</b>: the variable edge fillet is defined by radius/vertex pairs
		 * <br><b>Legal values</b>: the CATPrtFilletType type can be set
		 * to <tt>CONSTANT</tt> or <tt>VARIABLE</tt>.
		 */
  virtual CATPrtFilletType GetFilletType() const = 0;

    /**
     * Returns the edge fillet constant radius.
		 * <br><b>Precondition</b>: only for edge fillets with a constant radius.
		 * <br><b>Legal values</b>: The radius value must be greater 
     * than 0 but not equal to 0. 
		 */
  virtual double GetRadius() const= 0;
  /** @nodoc */
  virtual CATICkeParm_var GetRadiusParm() const= 0;

    /**
     * Returns the fillet radius on an imposed vertex of a variable edge fillet.
		 * <br><b>Precondition</b>: only for edge fillets with a variable radius.
     * A radius/vertex pair is made up of a vertex associated with a radius.
     * @param iVertex
     * Specifies the vertex which the radius to be modified.
		 * The vertex should be a point, a plane (intersecting edges)  
		 * or a CATIMfPointOnEdge feature belonging to the fillet.  
		 * <br><b>Legal values</b>: The radius value must be greater 
     * than or equal to 0. 
		 */
  virtual double GetRadiusOnVertex(CATISpecObject_var iVertex) const = 0;

  /** @nodoc */
  virtual CATICkeParm_var GetRadiusParmOnVertex(CATISpecObject_var iVertex) const = 0;

	  /**
     * Returns the propagation mode of the elements to be filleted.
		 * The propagation mode specifies the edges taken into account when filleting.
     * <br>The propagation can be performed in two ways:
     * <br><b>Tangency</b>:CATIA continues filleting beyond the selected edge 
		 * until it encounters an edge that is non continuous in tangency.
     * <br><b>Minimal</b>: the propagation is done up to the first natural relimitation
		 * by the geometry.
		 * <br><b>Legal values</b>: the CATPrtFilletPropagation propagation mode can be set
		 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
		 */
  virtual CATPrtFilletPropagation GetPropagation() const= 0;

    /**
     * Returns the edge fillet radius variation mode.
 		 * <br><b>Precondition</b>: only for edge fillets with a variable radius.
		 * The variation mode specifies the way the fillet shape changes
     * from one radius to another.
     * <br>The variation can be performed in two ways:
     * <br><b>Cubic</b>: the fillet changes smoothly from one
     * radius to another.
     * <br><b>Linear</b>: the fillet changes straight from one
     * radius to another.;
		 * <br><b>Legal values</b>: the CATPrtFilletVariation variation mode can be set
		 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 		 */
  virtual CATPrtFilletVariation GetVariation() const = 0;
		/**
     * Returns the list of filleted edges or faces.
     * The CATISpecObject_var is a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature. 
	   */
  virtual CATLISTV(CATISpecObject_var) * GetObject() const= 0;
    /**
     * Returns the list of defined vertices.
		 * The vertex is a point, a plane (intersecting edges)  
		 * or a CATIMfPointOnEdge feature belonging to the fillet.  
	   */
  virtual CATLISTV(CATISpecObject_var) * GetVertex() const = 0;

  /** @nodoc */
  virtual CATLISTV(CATISpecObject_var) * GetKeepEdge() const = 0;

  /** @nodoc */
  virtual CATEdge_var GetSupportEdge(CATISpecObject_var ihVertex, CATISpecObject_var ihInitialEdge, CATPointOnCurve_var &ohProjectedPoint, CATCurve_var &ohCurveMin) const = 0;
	
	/** @nodoc */
	virtual HRESULT SetFilletSpine(CATISpecObject_var ihSpine) = 0;
	/** @nodoc */
  virtual HRESULT GetFilletSpine(CATISpecObject_var &ohSpine) const= 0;
	/** @nodoc */
	virtual HRESULT SetBitangencyType(CATPrtBitangencyType iBitangencyType) = 0;
	/** @nodoc */
  virtual HRESULT GetBitangencyType(CATPrtBitangencyType& oBitangencyType) const= 0;

  /** @nodoc */
  virtual HRESULT SetTrimType(CATPrtTrimType iTrimType) = 0;
  /** @nodoc */
  virtual HRESULT GetTrimType(CATPrtTrimType& oTrimType) const= 0;
  
  /** @nodoc */
  virtual HRESULT AddBlendFromVertices(double& oSetBackValue) const= 0;
  /** @nodoc */
  virtual HRESULT RemoveBlend(CATISpecObject_var& iBlend) const= 0;
  /** @nodoc */
  virtual int GetNbOfBlends() const= 0;
  /** @nodoc */
  virtual HRESULT GetBlends(CATLISTV(CATISpecObject_var)& oBlendList) const= 0; 
  
  /** @nodoc */
  virtual HRESULT SetCliffEdgeMode(CATPrtCliffEdgeMode iCliffEdgeMode) const= 0;

  /** @nodoc */
  virtual HRESULT GetCliffEdgeMode(CATPrtCliffEdgeMode &oCliffEdgeMode) const= 0;





};

CATDeclareHandler (CATIEdgeFillet, CATIFillet); 

#endif // CATIEdgeFillet_H
