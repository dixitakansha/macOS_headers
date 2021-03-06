//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSURL;

@interface TDNamedAssetImportInfo : NSObject <NSCopying>
{
    BOOL _optOutOfThinning;
    BOOL _isFlippable;
    BOOL _cubeMap;
    NSString *_name;
    long long _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    long long _idiom;
    long long _subtype;
    unsigned long long _scaleFactor;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamut;
    long long _layoutDirection;
    unsigned long long _memoryClass;
    unsigned long long _graphicsClass;
    long long _graphicsFeatureSetClass;
    long long _compressionType;
    double _lossyCompressionQuality;
    NSSet *_tags;
    NSString *_universalTypeIdentifier;
    NSArray *_containedImageNames;
    NSArray *_layerReferences;
    unsigned long long _textureWidth;
    unsigned long long _textureHeight;
    unsigned long long _textureDepth;
    unsigned long long _arrayIndex;
    long long _texturePixelFormat;
    long long _textureInterpretation;
    NSArray *_textureInfos;
    struct CGSize _resizableSliceSize;
    struct CGSize _canvasSize;
    CDStruct_3c058996 _sliceInsets;
    struct CGRect _alignmentRect;
}

@property(copy, nonatomic) NSArray *textureInfos; // @synthesize textureInfos=_textureInfos;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) long long texturePixelFormat; // @synthesize texturePixelFormat=_texturePixelFormat;
@property(nonatomic) unsigned long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property(nonatomic) BOOL cubeMap; // @synthesize cubeMap=_cubeMap;
@property(nonatomic) unsigned long long textureDepth; // @synthesize textureDepth=_textureDepth;
@property(nonatomic) unsigned long long textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) unsigned long long textureWidth; // @synthesize textureWidth=_textureWidth;
@property(copy, nonatomic) NSArray *layerReferences; // @synthesize layerReferences=_layerReferences;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(copy, nonatomic) NSArray *containedImageNames; // @synthesize containedImageNames=_containedImageNames;
@property(copy, nonatomic) NSString *universalTypeIdentifier; // @synthesize universalTypeIdentifier=_universalTypeIdentifier;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(nonatomic) double lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
@property(nonatomic) long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) long long graphicsFeatureSetClass; // @synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass;
@property(nonatomic) unsigned long long graphicsClass; // @synthesize graphicsClass=_graphicsClass;
@property(nonatomic) unsigned long long memoryClass; // @synthesize memoryClass=_memoryClass;
@property(nonatomic) BOOL isFlippable; // @synthesize isFlippable=_isFlippable;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(nonatomic) long long sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) long long sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) struct CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property(nonatomic) BOOL optOutOfThinning; // @synthesize optOutOfThinning=_optOutOfThinning;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) struct CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) CDStruct_3c058996 sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long nameIdentifier; // @synthesize nameIdentifier=_nameIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
@property(nonatomic) BOOL isTemplate;
- (long long)renditionSubtype;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

