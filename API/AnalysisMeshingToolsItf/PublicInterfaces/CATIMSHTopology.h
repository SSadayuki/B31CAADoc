#ifndef CATIMSHTopology_H
#define CATIMSHTopology_H

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U3
 */

#include "MSHGeomTools.h"
#include "CATMSHTopologyType.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

class CATIMSHStPartition;
class CATIGeometricalElement;
class CATIProduct;
class CATVertex;
class CATEdge;
class CATFace;
class CATMSHOpenCodeRecorder;
class CATMSHMeshDomain;

extern ExportedByMSHGeomTools IID IID_CATIMSHTopology;

/**
 * This interface should be used to access informations and perform
 * modification on Mesh Part Topology.
 * <i>All methods of these interface are divided in two parts:</i>
 * <ul><li>The methods to use before topological simplifications:
 * <ul><li> ConstrainVertex,
 * <li> UnConstrainVertex,
 * <li> ConstrainEdge.
 * <li> UnConstrainEdge.
 * </ul>
 * <li>The method to use after topological simplifications:
 * <ul><li> InactivateVertex,
 * <li> InativateEdge,
 * <li> Get... Methods used to get all informations.
 * about the relations between the different topological entities,
 * these topological entities are:
 * <ul><li>TopDomain is representing Mesh Area, it's described by
 * a list of TopContours (loop);
 * <li>TopContour is representing a TopContour of a TopDomain, it's described by
 * a list of oriented edges;
 * <li>TopEdge is representing the basic component of a TopContour, it's
 * bounded by two vertices and has a geometric representation;
 * <li>TopVertex is a vertex bounding a TopEdge and has a geometric representation
 * (point coordinates).
 * </ul>
 * </ul> 
 * </ul>
 * @see CATIGeometricalElement, CATIProduct
 */

class ExportedByMSHGeomTools CATIMSHTopology: public CATBaseUnknown
{
CATDeclareInterface;

public:

/**
 * @nodoc 
 */
  virtual HRESULT Initialize () = 0;
/**
 * @nodoc 
 */
  virtual HRESULT Remove() = 0;
/**
 * @nodoc 
 * @return CATBaseUnknown#Release
 */
  virtual CATBaseUnknown * GetImplementation() = 0;
/**
 * This method is used to get the scope and the product:
 * <li>The scope is used to manage a geometrical feature,
 * <li>The product to manage products.<dd>
 * <br><b>Role</b>: With the scope which is a geometrical object
 * the body could be getting.<dd>
 * @param Scope [out, CATBaseUnknown#Release]
 *   output parameter: to get the scope.<dd>
 *   <tt><b>WARNING</b></tt>: the scope must be released after using.
 * @param Product
 *   output parameter: to get the product.<dd>
 *   <tt><b>WARNING</b></tt>: the product must be released after using.
 * @return [out, CATBaseUnknown#Release]
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetScopeAndProduct ( CATIGeometricalElement * &Scope, CATIProduct * &Product ) = 0;
/**
 * This method is used to constrain a vertex.<dd> 
 * <br><b>Role</b>: Before the topological simplification, some 
 * specifications could be apply, one of these specification is
 * "constrain a vertex".After the simplification, a constrain 
 * TopVertex is visible (colored in green, yellow or red).<dd>
 * @param Vertex
 *	The input parameter: the CATVertex which must be constrained.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT ConstrainVertex ( const CATVertex * Vertex ) = 0;
/**
 * This method is used to constrain an edge.<dd> 
 * <br><b>Role</b>: Before the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "constrain an TopEdge".After the simplification a constrain
 * TopEdge will be visible (colored in yellow).<dd>
 * <tt><b>WARNING</b></tt>: Constrain an edge doesn't imply 
 * to constrain it's bounding vertices.
 * @param Edge
 *	The input parameter: the CATEdge which must be constrained.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT ConstrainEdge ( const CATEdge * Edge ) = 0;
/**
 * This method is used to unconstrain a vertex.<dd> 
 * <br><b>Role</b>: Before the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "unconstrain a vertex".After the simplification a unconstrain
 * TopVertex will not be visible.<dd>
 * <tt><b>WARNING</b></tt>: 
 * <ul><li>All vertices of a loop won't be unconstrained
 * because a loop countain one TopEdge or more and consequently
 * <b>one TopVertex or more</b> (the last vertex of a loop couldn't
 * be unconstrain).
 * <li> The CATVertex couldn't be unconstrained when after the
 * topological simplification the resulting TopVertex is connected
 * to one ore more than two TopEdges ( <tt>contradictory specifications,
 * edges created by geometry simplifications</tt>). 
 * </ul>
 * @param Vertex
 *	The input parameter: the CATVertex which must be unconstrained.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT UnConstrainVertex ( const CATVertex * Vertex ) = 0;
/**
 * This method is used to unconstrain an edge.<dd> 
 * <br><b>Role</b>: Before the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "unconstrain an edge".After the simplification a unconstrain
 * TopEdge will be not visible or visible (blue color as inactivated
 * TopEdge).<dd>
 * <tt><b>WARNING</b></tt>: To unconstrain an edge didn't implies to unconstrain
 * vertices associated because these vertices could be connected 
 * to others constrained edges.
 * @param Edge
 *	The input parameter: the edge which must be unconstrained.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT UnConstrainEdge ( const CATEdge * Edge ) = 0;
/**
 * This method is used to inactivate a TopVertex.<dd> 
 * <br><b>Role</b>: After the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "inactivate a TopVertex".It consists in removing the TopVertex
 * from simplified topology (the TopVertex will not be visible)<dd>.
 * <tt><b>WARNING</b></tt>: 
 * <ul><li>Inactivation is possible when the TopVertex is yellow only
 * (connected to two TopEdges).
 * <li>Inactivate a TopVertex implies modifications of connected
 * TopContour and TopEdge (no more usable).
 * </ul>
 * @param Vertex
 *	The input parameter: the TopVertex which must be inactivated.
 * @param Edge
 *	The output parameter: the TopEdge including the TopVertex
 *  after inactivation.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT InactivateVertex ( TopVertex * Vertex, TopEdge * &EdgeWire ) = 0;
/**
 * This method is used to inactivate an TopEdge.<dd> 
 * <br><b>Role</b>: After the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "inactivate a TopEdge". It consists in removing this TopEdge
 * from it's previous connected TopContour (the TopEdge will be
 * visible in blue color).<dd>
 * <tt><b>WARNING</b></tt>:
 * <ul><li>Inactivation is possible when the TopEdge is yellow only;
 * <li>Inactivate a TopEdge implies modifications or deletions
 * of connected TopContour and TopDomain.
 * </ul>
 * @param Edge
 *	The input parameter: the TopEdge which must be inactivate.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT InactivateEdge ( TopEdge * Edge, TopDomain * &Domain ) = 0;
/**
 * This method is used to get the list of TopDomain associated to the simplified
 * topology.<dd>
 *<br><b>Role</b>: After topological simplification, in order to modify
 * topology it is necessary to have the possibility to get the list of TopDomain
 * generated by the topology simplification.<dd>
 * <tt><b>WARNING</b></tt>:
 * <ul><li>The array of TopDomain could be changed by a creation,
 * activation or inactivation of TopEdge;
 * <li>When no more using list of TopDomain, you must delete it (
 * delete [] ListOfDomains). 
 * </ul>
 * @param NumberOfdomains.
 *   The output parameter: to get the number of TopDomain associated
 *   to the simplified topology.
 * @param ListOfdomains.
 *   The output parameter: to get the array of TopDomain.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetListOfDomains ( int &NumberOfDomains, TopDomain ** &ListOfDomains ) = 0;
/**
 * This method is used to get the list of TopContour associated to a TopDomain.<dd>
 *<br><b>Role</b>: After the topological simplification, in order to modify
 * topology it is necessary to have the possibility to get the list of TopContour
 * of each TopDomain.<dd>
 * <tt><b>WARNING</b></tt>:
 * <ul><li>The array of TopContour could be changed by a creation 
 * or inactivation of TopEdge;
 * <li>When no more using list of TopContour, you must delete it (
 * delete [] ListOfContours). 
 * </ul>
 * @param Domain.
 *   The Input parameter: the TopDomain from which users get TopContour.
 * @param NumberOfContour.
 *   The output parameter: to get the number of TopContour of the TopDomain.
 * @param ListOfContours.
 *   The output parameter: to get the list of TopContour of a TopDomain.
 * <dd><dd><dd>
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>the TopDomain</b><dd><dd>
 * <tt>______________</tt><dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<tt>___</tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<tt>&nbsp;&nbsp;</tt>|<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt> |<dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<tt>__</tt>|<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt> |<dd>
 * |<tt>_____________</tt>|<dd><dd>
 *
 *   In this case the TopDomain is composed by two TopContour and the output parameters are: 
 *   <ul><li>NumberOfContours=2,
 *   <li>ListofContour[0]= TopContour1,
 *   <li>ListofContour[1]= TopContour2.</ul>
 * 
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetListOfContours ( const TopDomain * Domain, int &NumberOfContours, TopContour ** &ListOfontours ) = 0;
/**
 * This method is used to get the list of oriented TopEdge associated to a TopContour.<dd>
 *<br><b>Role</b>: After the topological simplification, in order to modify
 * topology it is necessary to have the possibility to get the list of TopEdge
 * of each TopContour of a TopDomain. A TopContour is defined by a list of TopEdge with a
 * given orientation in a TopContour.<dd>
 * <tt><b>WARNING</b></tt>:When no more using list of TopEdge, you must delete it (
 * delete [] ListOfEdges).<dd> 
 * @param Contour.
 *   The input parameter: the TopContour from which users get the list of TopEdge.
 * @param NumberOfEdges.
 *   The output parameter: to get the number of TopEdge of the TopContour.
 * @param ListOfEdges.
 *   The output parameter: the list of TopEdge of the TopContour.
 * @param OrientOfEdges.
 *   The output parameter: to get the list of orientation for each TopEdge which are defined
 *   by a start TopVertex and an end TopVertex (OrientOfEdges[i]=1 when the start TopVertex
 *   is reached in first during the scan of the TopContour, OrientOfEdges[i]=- 1 in the others cases).<dd><dd><dd>
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>the TopContour</b><dd>
 * <tt>______________</tt><dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>| 
 * | the sense <dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>| 
 * | of routing     <dd>
 * |<tt><b>_____________</b></tt>| v  <dd>
 * start -------> end <dd>
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;</tt>TopEdge 0<dd><dd>
 *
 * In this case the sens of routing of the TopEdge in this TopContour is (end -> start): it's
 * the orientation (OrientOfEdges[0] = -1 in this case).<dd>
 * 
 * The TopContour, in this case is composed by four TopEdges and the output parameters are:
 * <ul><li>NumberOfEdges=4,
 * <li>ListOfEdges=[TopEdge1,TopEdge2,TopEdge3,TopEdge4],
 * <li>OrientOfEdges=[orientofedge1, orientofedge2, orientofedge3, orientofedge4].</ul>
 * 
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetListOfEdges ( TopContour * Contour, int &NunberOfEdges, TopEdge ** &ListOfEdges, int * &OrientOfEdges ) = 0;
/**
 * This method is used to get the vertices of a given TopEdge.<dd>
 * <br><b>Role</b>: After the topological simplification,in order to modify
 * topology it is necessary to have the possibility to get the two vertices
 * of an TopEdge.
 * @param Edge.
 *   The input parameter: the common TopEdge.
 * @param FirstVertex.
 *   The output parameter:the first vertex of the TopEdge.
 * @param LastVertex.
 *   The output parameter:the last vertex of the TopEdge.
 * <dd><b>Remark</b>: the TopEdge is oriented (in the sense first vertex => last vertex).
 * <dd><dd>
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>the TopEdge</b><dd><dd>
 * the sense of orientation =><dd>
 * <tt>&nbsp;*--------------*&nbsp;</tt><dd>
 * FirstVertex <tt>&nbsp;</tt> LastVertex<dd>
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetVertices ( const TopEdge * Edge, TopVertex * &FirstVertex, TopVertex * &LastVertex ) = 0;
/**
 * This method is used to get the TopEdge connected to a TopVertex.<dd>
 * <br><b>Role</b>: After the topological simplification,in order to modify
 * topology it is necessary to have the possibility to get all TopEdge connected
 * to a given TopVertex.<dd>
  * <tt><b>WARNING</b></tt>:When no more using list of TopEdge, you must delete it (
 * delete [] ListOfEdges).<dd>
 * @param Vertex.
 *   The input parameter: the common TopVertex.
 * @param ListOfEdges.
 *   The output parameter: the array of TopEdges connected to the current TopVertex.
 * @param NbEdges.
 *   The output parameter: the number of TopEdges connected to the current TopVertex.<dd><dd>
 * <b>One vertex & it's connections (vertices)</b><dd><dd>
 * <tt><b>o</b>-------*</tt><dd>
 * <tt>|\</tt><dd>
 * <tt>|&nbsp;\</tt><dd>
 * <tt>|&nbsp;&nbsp;\</tt><dd>
 * <tt>|&nbsp;&nbsp;&nbsp;\</tt><dd>
 * <tt>*&nbsp;&nbsp;&nbsp;&nbsp;*</tt><dd><dd>
 * <tt>In this example three TopEdge are connected to the common TopVertex</tt>
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetConnectedEdges( const TopVertex * Vertex, int &NbEdges, TopEdge ** &ListOfEdges) = 0;
/**
 * This method is used to get TopDomain connected to a TopEdge.<dd>
 * <br><b>Role</b>: After the topological simplification,in order to modify
 * topology it is necessary to have the possibility to get all TopDomain connected
 * to a given TopEdge.
 * <tt><b>WARNING</b></tt>:When no more using list of TopDomain, you must delete it (
 * delete [] ListOfDomains).<dd>
 * @param Edge.
 *   The input parameter: the common TopEdge.
 * @param ListOfDomains.
 *   The output parameter: the array of TopDomain connected to the current TopEdge.
 * @param NumberOfDomains.
 *   The output parameter: the number of TopDomain connected to the current TopEdge.<dd><dd>
 * <b>One TopEdge & it's connections (domains)</b><dd><dd>
 * <tt>____________________________</tt><dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>I</b>
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>I</b> 
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<dd>
 * |<tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt><b>I</b> 
 * <tt>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tt>|<dd>
 * |<tt>_____________</tt><b>I</b> <tt>_____________</tt>|<dd><dd>
 * <tt>TopDomain 1 &nbsp;&nbsp; the TopEdge &nbsp;&nbsp; TopDomain 2 </tt><dd><dd>
 * <tt>In this example two TopDomain are connected to the TopEdge</tt>
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetConnectedDomains (const TopEdge * Edge, int &NumberOfDomains, TopDomain ** &ListOfDomains) = 0;
/**
 * This method is used to get TopContour connected to a TopEdge.<dd>
 * <br><b>Role</b>: After the topological simplification,in order to modify
 * topology it is necessary to have the possibility to get all TopContour connected
 * to a given TopEdge.
 * <tt><b>WARNING</b></tt>:When no more using list of TopContour, you must delete it (
 * delete [] ListOfContours).<dd>
 * @param Edge.
 *   The input parameter: the common TopEdge.
 * @param ListOfDomains.
 *   The output parameter: the array of TopContour connected to the current TopEdge.
 * @param NumberOfDomains.
 *   The output parameter: the number of TopContour connected to the current TopEdge.<dd><dd>
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetConnectedContours (const TopEdge * Edge, int &NumberOfContours, TopContour ** &ListOfontours ) = 0;
/**
 * This method is used to get the TopDomain connected to a TopContour.<dd>
 * <br><b>Role</b>: After the topological simplification,in order to modify
 * topology it is necessary to have the possibility to get the TopDomain connected
 * to a given TopContour.<dd>
 * @param Contour.
 *   The input parameter: the TopContour.
 * @param Domain.
 *   The output parameter: the TopDomain connected to the TopContour.<dd><dd>
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetConnectedDomain ( const TopContour * Contour, TopDomain * &Domain ) = 0;
/**
 * This method is used to create a TopEdge in a given TopDomain.<dd> 
 * <br><b>Role</b>: After the topological simplification, some 
 * specifications could be apply, one of these specification is
 * "create TopEdge in domain". It consists in creating TopEdge
 * from two TopVertex and a TopDomain by creating a geometrical path on the
 * underlying geometry. The created TopEdge will be visible in yellow color.<dd>
 * <tt><b>WARNING</b></tt>:
 * <ul><li> Create a TopEdge implies deletion(s) of connected TopContour
 * and "potential" deletion of the given TopDomain;
 * <li> The two TopVertex must be connected to the given TopDomain ( connected to
 * a TopContour of the input TopDomain);
 * <li> The output TopEdge cannot be created if the computed path between the two
 * TopVertex intersect another TopEdge of the TopDomain.
 * <li> The first and end TopVertex of the created TopEdge are the two input TopVertex.
 * </ul>
 * @param Domain.
 *   The input parameter: the TopDomain in which the TopEdge is created.
 * @param FirstVertex.
 *   The input parameter: One of the two TopVertex of the created TopEdge.
 * @param LastVertex.
 *   The input parameter: the other TopVertex of the created TopEdge.
 * @param EdgeCreated.
 *   The output parameter: the TopEdge created.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT CreateEdgesInDomain( TopDomain * Domain, 
                                       const TopVertex * FirstVertex,
                                       const TopVertex * LastVertex,
                                       int &NbCreatedEdges, TopEdge ** &ListOfCreatedEdges ) = 0;
/**
 *This method is used to create a TopVertex located on TopEdge.<dd> 
 * <br><b>Role</b>: After the topological simplification, some 
 * specifications can be apply, one of these specification is
 * "create a TopVertex on a TopEdge". It consists in creating
 * a TopVertex and two connected TopEdge.<dd>
 * <tt><b>WARNING</b></tt>:
 * <ul><li> A TopVertex won't be created if the distance 
 * of the potential new TopVertex to the bounding TopVertex of the input
 * TopEdge is below the Tolerance.
 * <li>If the TopVertex is not created because it's closed from the First
 * TopVertex, the output parameters are:
 * <ul><li>VertexCut =  FirstVertex;
 * <li>FirstEdgeCut =  NULL;
 * <li>SecondEdgeCut = Edge.
 * </ul>
 * <li>If the TopVertex is not created because it's closed from the Last
 * TopVertex, the output parameters are:
 * <ul><li>VertexCut =  LastVertex;
 * <li>FirstEdgeCut =  Edge;
 * <li>SecondEdgeCut = NULL.
 * </ul>
 * <li>Create a TopVertex implies deletion of the TopEdge and modifications of
 * the connected TopContour (no more usable).
 * </ul>
 * @param Edge
 *	The input parameter: the TopEdge on which a TopVertex will be created.
 * @param Coor[3]
 *	The input parameter: the coordinates that will be projected on the TopEdge
 *  to determine the created TopVertex location (VertexCut).
 * @param Tolerance
 *	The input parameter: Represent the minimum distance between the potential
 *  new TopVertex (VertexCut) and TopVertex bounding the current TopEdge.
 * @param VertexCut
 *	The output parameter: the TopVertex created.
 * @param FirstEdgeCut
 *	The output parameter: the first TopEdge created by impact of
 *  TopVertex creation (create a TopVertex in a TopEdge is like cutting
 *  this one).
 * @param SecondEdgeCut
 *  The output parameter: the second TopEdge created by impact of
 *  TopVertex creation (create a TopVertex in a TopEdge is like cutting
 *  this one).
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.  
 */
  virtual HRESULT CreateVertexOnEdge ( TopEdge * Edge, double Coor[3], double Tolerance,
                                       TopVertex * &VertexCut,
                                       TopEdge * &FirstEdgeCut, TopEdge * &SecondEdgeCut ) = 0;
/**
 * This method is used in order to get the coordinates of the associated geometry
 * of a TopVertex.<dd>
 * @param Vertex.
 *   The input parameter: TopVertex.
 * @param Coor[3].
 *   The output parameter: the array of coordinates (double[3]) .
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetCoor( const TopVertex * Vertex, double Coor[3] ) = 0;
/**
 * This method is used in order to get the geometrical discretization of
 * a given TopEdge.<dd>
 * @param Edge.
 *   The input parameter: TopEdge.
 * @param NumberOfPoints.
 *   The output parameter: the number of discretization points.
 * @param ListOfPoints.
 *   The output parameter: the array of points (double *) .
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetDiscretization( const TopEdge * Edge, int &NunberOfPoints, double * &ArrayOfPoints) = 0;
/**
 * This method is used in order to get the CATIMSHStPartition associated
 * to a given TopDomain.<dd>
 * @param Domain.
 *   The input parameter: TopDomain.
 * @param Partition.
 *   The output parameter: @href CATIMSHStPartition.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetPartition ( const TopDomain * Domain, CATIMSHStPartition * &Partition ) = 0;
/**
 * This method is used in order to get the CATIMSHStPartition associated
 * to a given TopEdge.<dd>
 * @param Edge.
 *   The input parameter: TopEdge.
 * @param Partition.
 *   The output parameter: @href CATIMSHStPartition.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetPartition ( const TopEdge   * Edge,   CATIMSHStPartition * &Partition ) = 0;
/**
 * This method is used in order to get the CATIMSHStPartition associated
 * to a given TopVertex.<dd>
 * @param Vertex.
 *   The input parameter: TopVertex.
 * @param Partition.
 *   The output parameter: @href CATIMSHStPartition.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetPartition ( const TopVertex * Vertex, CATIMSHStPartition * &Partition ) = 0;
/**
 * This method is used in order to get the TopDomain associated
 * to a given CATIMSHStPartition.<dd>
 * @param Partition.
 *   The input parameter: @href CATIMSHStPartition.
 * @param Domain.
 *   The output parameter: TopDomain.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetTopDomain ( const CATIMSHStPartition * Partition, TopDomain * &Domain) = 0;
/**
 * This method is used in order to get the TopEdge associated
 * to a given CATIMSHStPartition.<dd>
 * @param Partition.
 *   The input parameter: @href CATIMSHStPartition.
 * @param Edge.
 *   The output parameter: TopEdge.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetTopEdge   ( const CATIMSHStPartition * Partition, TopEdge   * &Edge  ) = 0;
/**
 * This method is used in order to get the TopVertex associated
 * to a given CATIMSHStPartition.<dd>
 * @param Partition.
 *   The input parameter: @href CATIMSHStPartition.
 * @param Vertex.
 *   The output parameter: TopVertex.
 * @return 
 *	return an <tt>HRESULT</tt> which specify if the method is
 *  valid. 
 */
  virtual HRESULT GetTopVertex ( const CATIMSHStPartition * Partition, TopVertex * &Vertex) = 0; 
/**
 * This method is used in order to get the Tag of a TopVertex.<dd>
 * @param Tag
 *   The output parameter: the tag of the TopVertex
 * @param Obj
 *   The input parameter: the TopVertex.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetVertexTag( TopVertex* Vertex, unsigned int &Tag) = 0;  
/**
 * This method is used in order to get the Tag of a TopEdge.<dd>
 * @param Tag
 *   The output parameter: the tag of the TopEdge
 * @param Obj
 *   The input parameter: the TopEdge.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetEdgeTag( TopEdge* Edge, unsigned int &Tag) = 0; 
/**
 * This method is used in order to get the Tag of a TopDomain.<dd>
 * @param Tag
 *   The output parameter: the tag of the TopDomain
 * @param Obj
 *   The input parameter: the TopDomain.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid.
 */
  virtual HRESULT GetDomainTag( TopDomain* Domain, unsigned int &Tag) = 0;
/**
 * This method is used in order to get the TopVertex associated
 * to the input tag.<dd>
 * @param Tag
 *   The input parameter: the tag of the TopVertex
 * @param Obj
 *   The output parameter: the TopVertex.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid ( if the tag is not a vertex tag the method return E_FAIL ).
 */
  virtual HRESULT GetVertexFromTag( const unsigned int Tag, TopVertex * &Obj) = 0;
/**
 * This method is used in order to get the TopEdge associated
 * to the input tag.<dd>
 * @param Tag
 *   The input parameter: the tag of the TopEdge
 * @param Obj
 *   The output parameter: the TopEdge.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid ( if the tag is not an edge tag the method return E_FAIL ).
 */
  virtual HRESULT GetEdgeFromTag( const unsigned int Tag, TopEdge * &Obj) = 0;
/**
 * This method is used in order to get the TopDomain associated
 * to the input tag.<dd>
 * @param Tag
 *   The input parameter: the tag of the TopDomain
 * @param Obj
 *   The output parameter: the TopDomain.
 * @return
 *  return an <tt>HRESULT</tt> which specify if the method is
 *  valid ( if the tag is not a domain tag the method return E_FAIL ).
 */
  virtual HRESULT GetDomainFromTag( const unsigned int Tag, TopDomain * &Obj) = 0;
/**
 * @nodoc
 */
  virtual void SetRecorder (CATMSHOpenCodeRecorder * Recorder )=0;
/**
 * @nodoc
 */
  virtual HRESULT GetMeshDomain ( TopDomain * Obj , CATMSHMeshDomain *& Domain )=0;
/**
 * @nodoc
 */
  virtual HRESULT GetDomain ( const double Coord[3] , CATFace * Face , TopDomain *& Obj )=0;
/**
 * @nodoc
 */
  virtual boolean IsFrozen ( TopDomain * Obj )=0;
/**
 * @nodoc
 */
  virtual HRESULT ActivateTessFaces ()=0;
/**
 * @nodoc
 */
  virtual HRESULT Freeze ( TopDomain * Obj , boolean Freezed )=0;
/**
 * @nodoc
 */
  virtual boolean IsMeshed ( TopDomain * Obj )=0;
/**
 * @nodoc
 */
  virtual HRESULT UpdateVisualization ( int Option ) =0;

};

#endif
