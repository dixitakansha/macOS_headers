//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "GSSPPromiseCallback-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSDCompatibilityAwareMediaContainer-Protocol.h"
#import "TSDReducibleImageContainer-Protocol.h"
#import "TSDReplaceableMediaContainer-Protocol.h"
#import "TSKModel-Protocol.h"
#import "TSKTransformableObject-Protocol.h"
#import "TSSPropertySource-Protocol.h"
#import "TSSPropertyValueValidator-Protocol.h"
#import "TSSStyleClient-Protocol.h"
#import "TSSStyleObject-Protocol.h"

@class NSDictionary, NSString, TSSPropertyMap, TSSStylesheet, TSURetainedPointerSet;

@interface TSSStyle : TSPObject <GSSPPromiseCallback, GSSPAutoEncodable, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject>
{
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
    TSSStyle *mParent;
    BOOL mIsVariation;
    TSSStylesheet *mStylesheet;
    BOOL mWasUnarchivedAsOrphanVariation;
}

+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+ (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (BOOL)needsObjectUUID;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (id)description;
+ (id)properties;
+ (id)validateFontInPropertyMap:(id)arg1 parentStyle:(id)arg2 checkedFontMap:(id)arg3;
+ (id)validateFontName:(id)arg1 size:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 checkedFontMap:(id)arg5 newFontName:(id *)arg6 newBold:(char *)arg7 newItalic:(char *)arg8;
+ (struct __CTFont *)pCreateFontWithName:(id)arg1 fontSize:(double)arg2;
+ (id)pReplacementForMissingFontName:(id)arg1 outBold:(int *)arg2 outItalic:(int *)arg3 outQuiet:(char *)arg4;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
@property(readonly, nonatomic) TSSStyle *parent; // @synthesize parent=mParent;
- (void)setObjectUUID:(id)arg1;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (BOOL)transformsFontSizes;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
- (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
- (BOOL)isRelatedTo:(id)arg1;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isDescendentOf:(id)arg1;
- (BOOL)isParentOf:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
@property(readonly, nonatomic) TSURetainedPointerSet *descendants;
@property(readonly, nonatomic) TSURetainedPointerSet *children;
- (void)setParent:(id)arg1;
@property(readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property(readonly, nonatomic) TSSStyle *firstNamedAncestor;
@property(readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property(readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property(readonly, nonatomic) TSSStyle *rootAncestor;
- (BOOL)overridePropertyMapIsEqualTo:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
@property(readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
- (BOOL)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (BOOL)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (BOOL)hasEqualPropertyValues:(id)arg1;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(BOOL)arg3;
- (id)fullPropertyMap;
- (id)copyPropertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMap;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overrideValueForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (id)overriddenProperties;
- (BOOL)overridesAnyProperty;
- (BOOL)overridesProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
@property(readonly, nonatomic) NSString *contentTag;
- (BOOL)definesProperty:(int)arg1;
@property(readonly, nonatomic) BOOL isIdentified;
@property(readonly, nonatomic) BOOL isNamed;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)setValuesForProperties:(id)arg1;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)valuesForProperties:(id)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)valueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)copyWithContext:(id)arg1 includeParentProperties:(BOOL)arg2;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)copyFlattenedWithContext:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2 ignoreObjectUUID:(BOOL)arg3;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectUUID:(BOOL)arg2;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)setStylesheet:(id)arg1;
- (void)setIsVariation:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isVariation;
- (void)setStyleIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *styleIdentifier;
@property(copy, nonatomic) NSString *name;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)matchesPropertySourceForPreset:(id)arg1;
- (id)compareWithPropertySourceForPreset:(id)arg1 forProperties:(id)arg2 maxMismatches:(unsigned long long)arg3;
- (BOOL)matchesPropertySourceForPreset:(id)arg1 forProperties:(id)arg2;
- (id)debug_propertiesThatDefinitelyDifferentiatePresets;
- (id)propertiesThatDifferentiatePresets;
- (void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2;
- (BOOL)boolValueForProperty:(int)arg1 defaultValue:(BOOL)arg2;
- (id)validateFontWithCheckedFontMap:(id)arg1;
- (void)saveParagraphStylePropertiesToArchive:(struct ParagraphStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)saveCharacterStylePropertiesToArchive:(struct CharacterStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)loadParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ParagraphStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (void)promiseFulfilled:(id)arg1;
- (void)saveToArchive:(struct StyleArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct StyleArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)compatibilityConverterForData:(id)arg1 associatedHint:(id)arg2 desiredCompatibilityLevel:(long long)arg3;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (id)compatibilityCheckerForData:(id)arg1 associatedHint:(id)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)commandsForReplacingMediaInOldToNewDictionary:(id)arg1 associatedHints:(id)arg2;
- (id)overridePropertyMapByReplacingMediaInOldToNewDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *datasForReplacingMediaContentsWithAssociatedHints;
- (id)shapeStyleByRemovingShadowFrameAndReflectionForContext:(id)arg1;
- (id)shapeStyleByRemovingTextShadowForContext:(id)arg1;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (void)constrainShadowForSwatchGeneration;
- (void)fadeReflectionForSwatchGeneration;
- (int)intValueForMUXedProperty:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

