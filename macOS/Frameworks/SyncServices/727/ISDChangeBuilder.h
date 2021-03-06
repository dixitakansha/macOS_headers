//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISDEntity, ISDRecordStore, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ISDChangeBuilder : NSObject
{
    NSDictionary *_supportedPropertyNames;
    id _delegate;
    NSString *_recordId;
    NSString *_clientId;
    unsigned int _fromGeneration;
    unsigned int _toGeneration;
    BOOL _produceDeletesForMissingNewValues;
    BOOL _hasOldRecord;
    BOOL _hasNewRecord;
    BOOL _newRelationshipValuesAreTuples;
    BOOL _takeMissingCodependentValuesFromOldValues;
    ISDEntity *_entity;
    NSMutableDictionary *_oldValues;
    NSDictionary *_oldUnformattedRelationships;
    NSMutableDictionary *_newValues;
    NSMutableSet *_deletedPropertyNames;
    NSMutableSet *_missingCodependentPropertyNames;
    NSMutableArray *_deltas;
    id _change;
    BOOL _clientIsTrusted;
    BOOL _isPushingTruth;
    ISDRecordStore *_clientRecordStore;
    NSMutableDictionary *_relationshipNewReferences;
    NSMutableArray *_defaultPropertyNames;
}

- (id)entity;
- (id)recordId;
- (id)change;
- (void)buildDeltas;
- (void)buildDeltasForMissingCodependentProperties;
- (void)buildDeltasForNewProperties;
- (void)buildDeltasForExistingProperties;
- (BOOL)_isDefaultValue:(id)arg1;
- (BOOL)_isTargetIdFiltered:(id)arg1;
- (BOOL)isSpecialGlobalProperty:(id)arg1 propertyDescription:(id *)arg2;
- (void)makeSureToPushCodependentPropertiesForPropertyName:(id)arg1;
- (void)validateValue:(id)arg1 forPropertyDescription:(id)arg2;
- (id)unformattedTuplesForRelationshipName:(id)arg1;
- (BOOL)shouldCreateDeltaBetweenOldValue:(id)arg1 newValue:(id)arg2 propertyDescription:(id)arg3;
- (BOOL)isOldValue:(id)arg1 equalToNewValue:(id)arg2 propertyDescription:(id)arg3;
- (BOOL)shouldCreateDeltaForProperty:(id)arg1;
- (void)setShouldTakeMissingCodependentValuesFromOldValues:(BOOL)arg1;
- (void)setProduceDeletesForMissingNewValues:(BOOL)arg1;
- (void)takeNewValuesFromRecord:(id)arg1;
- (void)takeNewValuesFromChange:(id)arg1;
- (int)actionFromDeltaDictionary:(id)arg1 inChange:(id)arg2;
- (void)takeNewValuesFromDictionary:(id)arg1;
- (void)_removeNullValuesAndDefaultPropertyNamesFromDictionary:(id)arg1;
- (void)setHasOldValue:(BOOL)arg1;
- (void)takeOldValuesFromRecord:(id)arg1;
- (id)_newUndeletedRecordIdsFromTuples:(id)arg1;
- (BOOL)isPushingTruth;
- (void)setIsPushingTruth:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)relationshipNewReferences;
- (void)computeActualChangesNewValues:(id)arg1 oldValues:(id)arg2 forProperty:(id)arg3;
- (void)dealloc;
- (id)initWithClientId:(id)arg1 recordId:(id)arg2 entity:(id)arg3 propertyNamesSynchronizedByClient:(id)arg4 lastModifiedGeneration:(unsigned int)arg5 currentGeneration:(unsigned int)arg6 clientIsTrusted:(BOOL)arg7 clientState:(id)arg8;

@end

