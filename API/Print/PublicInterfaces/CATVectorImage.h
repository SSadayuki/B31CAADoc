/**
* @quickReview NFO F7M 14/03/05 IR-276627V5-6R2014
*/

#ifndef CATVECTORIMAGE_H
#define CATVECTORIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPrint.h"
#include "CATBaseUnknown.h"
#include "CATString.h"
class CATPrintImage;
class CATPrintFileImage;
class CATStreamer;

/**
* Class to represent a vectorial graphic image in memory.
* <b>Role</b>: This object is used to read, visualize, write vectorial images.<br>
* The supported vectorial formats are those supported by the CATPrintFileImage.<br>
* @see CATPrintFileImage
*/
class ExportedByCATPrint CATVectorImage : public CATBaseUnknown
{
	friend class CAT2DImageVectorRep;
	friend class CATPrintVectorImage;

	CATDeclareClass;

public:

	/**
	* Builds a CATVectorImage from a CATPrintFileImage.
	* @param iImage
	*   The CATPrintFileImage to read.
	*/
	CATVectorImage(CATPrintFileImage* iImage);
	virtual ~CATVectorImage();

	/**
	* Builds a CATVectorImage from a CATPrintFileImage.
	* @param iImage
	*   The CATPrintFileImage to read.
	*/
	CATVectorImage(CATPrintFileImage& iImage);

	/**
	* Builds a default CATVectorImage.
	*/
	CATVectorImage();

	/**
	* Assignment operator.
	* @param iVectorImage
	*   An existing <tt>CATVectorImage</tt>.
	*/
	CATVectorImage & operator =(const CATVectorImage& iVectorImage);

	/**
	* Copy constructor.
	* @param iVectorImage
	*   An existing <tt>CATVectorImage</tt>.
	*/
	CATVectorImage(const CATVectorImage& iVectorImage);

	/**
	* Returns the vector validity of a graphic file.
	* @param iPathName
	*   The path of the graphic file.
	* @return 
	*   The vector validity. 
	*   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
	*/
	static int IsValidVectorFile(const CATString& iPathName);

	/**
	* Returns the vector image from a graphic vector file.
	* @param iPathName
	*   The path of the graphic vector file.
	* @param iCacheMode
	*   The cache mode is used if set to 1. Default is 0.
	* @return 
	*   The vector image.
	*/
	static CATVectorImage* CreateFromFile(const CATString& iPathName, const int iCacheMode = 0);

	/**
	* Retrieves the size of the file image.
	* @param oWidth
	*   The width of the image.
	* @param oHeight
	*   The height of the image.
	* @return
	*   The status of the method.
	*   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
	*/
	virtual int GetSize(float& oWidth, float& oHeight);

	/**
	* Gets the initial width and height of the vector image.
	* @param oInitWidth
	*   The init width of the graphic vector file.
	* @param oInitHeight
	*   The init height of the graphic vector file.
	*/
	void GetInitialWidthAndHeight(float& oInitWidth, float& oInitHeight);

	/**
	* Sets the width and height of the vector image.
	* @param iWidth
	*   The width of the graphic vector file.
	* @param iHeight
	*   The height of the graphic vector file.
	*/
	virtual void SetWidthAndHeight(const float iWidth, const float iHeight);

	/**
	* Gets the width and height of the vector image.
	* @param oWidth
	*   The width of the graphic vector file.
	* @param oHeight
	*   The height of the graphic vector file.
	*/
	virtual void GetWidthAndHeight(float& oWidth, float& oHeight) const;

	/**
	* Sets the scale of the vector image.
	* @param iScale
	*   The scale of the graphic vector file.
	*/
	virtual void SetScale(const float iScale);

	/**
	* Returns the scale of the vector image.
	* @return 
	*   The scale of the graphic vector file.
	*/
	virtual float GetScale() const;

	/**
	* Sets the rotation of the vector image in degres.
	* @param iRotate
	*   The rotation of the graphic vector file.
	*/
	virtual void SetRotation(const float iRotate);

	/**
	* Returns the rotation of the vector image.
	* @return 
	*   The rotation of the graphic vector file.
	*/
	virtual float GetRotation() const;

	/**
	* Returns the format of the vector image.
	* @return 
	*   The format of the graphic vector file.
	*/
	virtual CATString GetFormat();

	/**
	* Creates a new <tt>CATVectorImage</tt> from a region of the image.
	* @param iXmin
	*   The X left coordinate of the region.
	* @param iXmax
	*   The X right coordinate of the region.
	* @param iYmin
	*   The Y lower coordinate of the region.
	* @param iYmax
	*   The Y upper coordinate of the region.
	* @return
	* <dl>
	*  <dt>A new <tt>CATVectorImage</tt>.</dt>
	* </dl>
	*/
	virtual CATVectorImage* CreateSubImage(float iXmin, float iYmin, float iXmax, float iYmax) const;

	/**
	* @nodoc
	* Streams a <tt>CATVectorImage</tt>.
	*/
	virtual void Stream(CATStreamer& oStr, int iSaveType = 0);

	/**
	* @nodoc
	* UnStreams a <tt>CATVectorImage</tt>.
	*/
	virtual void UnStream(CATStreamer& iStr);

	

private:

	static int GetIndexImageFromCache(const CATString& iPathName);
	static void SetImageInCache(const CATString& iPathName, CATVectorImage* iImage);
	//Name: F7M
	// Method is added to delete index from cache
	/**
	* Delete Image from cache
	*/
	static int DeleteIndexFromCache(CATString Path);
	
	static CATString cachePath[5];
	static CATVectorImage cacheImage[5];
	static int cacheNum;

	void SetViewport(float iXmin, float iYmin, float iXmax, float iYmax);
	void GetViewport(float* oXmin, float* oYmin, float* oXmax, float* oYmax) const;

	CATPrintImage* GetPrintImage();

	CATPrintFileImage* _paFileImage;

	float _width, _height;
	float _initWidth;
	float _initHeight;
	float _scale;
	float _rotate;
	float _xMin;
	float _yMin;
	float _xMax;
	float _yMax;
	CATString _format;

};

#endif







