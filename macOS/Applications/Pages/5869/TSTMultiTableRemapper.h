//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKMultiTableRemapping-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TSTMultiTableRemapper : TSKSosBase <GSSPAutoEncodable, TSKMultiTableRemapping>
{
    unsigned int _purpose;
    BOOL _shouldStealReferences;
    BOOL _canReuseTableNames;
    NSArray *_ownerUidMapper;
    UUIDMap_b66c2694 _chartToBackingTable;
    BOOL _crossDocumentPaste;
    vector_4dc5f307 _knownFormulaOwnerUIDs;
    vector_4dc5f307 _remappedTableUIDs;
    UUIDMap_b66c2694 _combinedTableUidMap;
    BOOL _nestedInnerRemapper;
    BOOL _tablesAlreadyExist;
    NSMutableArray *_knownTableInfos;
    NSMutableArray *_remappedTableInfos;
    NSMutableDictionary *_ownerUIDMappersForTables;
}

+ (id)multiTableRemapperForAddedDrawables:(id)arg1;
+ (id)multiTableRemapperForAddedDrawables:(id)arg1 forPurpose:(unsigned int)arg2;
@property(nonatomic) BOOL tablesAlreadyExist; // @synthesize tablesAlreadyExist=_tablesAlreadyExist;
@property(retain, nonatomic) NSArray *ownerUidMapper; // @synthesize ownerUidMapper=_ownerUidMapper;
@property(retain, nonatomic) NSMutableDictionary *ownerUIDMappersForTables; // @synthesize ownerUIDMappersForTables=_ownerUIDMappersForTables;
@property(retain, nonatomic) NSMutableArray *remappedTableInfos; // @synthesize remappedTableInfos=_remappedTableInfos;
@property(retain, nonatomic) NSMutableArray *knownTableInfos; // @synthesize knownTableInfos=_knownTableInfos;
@property(nonatomic) BOOL nestedInnerRemapper; // @synthesize nestedInnerRemapper=_nestedInnerRemapper;
@property(nonatomic) BOOL crossDocumentPaste; // @synthesize crossDocumentPaste=_crossDocumentPaste;
@property(nonatomic) BOOL canReuseTableNames; // @synthesize canReuseTableNames=_canReuseTableNames;
@property(nonatomic) BOOL shouldStealReferences; // @synthesize shouldStealReferences=_shouldStealReferences;
@property(nonatomic) unsigned int purpose; // @synthesize purpose=_purpose;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct MultiTableRemapperArchive *)arg1;
- (id)initWithArchive:(const struct MultiTableRemapperArchive *)arg1;
- (id)initFromArchive:(const struct MultiTableRemapperArchive *)arg1;
- (id)applyAndClearMultiTableRemapperCommand:(id)arg1;
- (id)chooseMultiTableRemapperCommand:(id)arg1;
- (BOOL)shouldCreateRemapperCommands;
- (BOOL)isEmpty;
- (id)localTableIdRemappingCommand:(id)arg1;
- (id)commandGroupClearingWasCut:(id)arg1;
- (id)rewriteSpecForExistingTables:(id)arg1;
- (void)remapTableIDsInTable:(id)arg1 withCalcEngine:(id)arg2;
- (void)resetForTableModel:(id)arg1;
- (void)reset;
- (void)didInitFromSOS;
- (id)makeInverse;
- (id)initWithDrawablesInStorages:(id)arg1;
- (id)initWithDrawablesInStorages:(id)arg1 forPurpose:(unsigned int)arg2;
- (id)initWithAddedDrawables:(id)arg1;
- (id)initWithAddedDrawables:(id)arg1 forPurpose:(unsigned int)arg2;
- (id)init;
- (void)addKnownTablesInDrawables:(id)arg1;
- (void)addKnownTablesInDrawables:(id)arg1 alreadyAddedTables:(id)arg2;
- (UUIDData_5fbc143e)backingTableUidForChart:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)mapOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (const UUIDMap_b66c2694 *)combinedTableUidMap;
- (id)ownerUIDMapperForTable:(id)arg1 createIfMissing:(BOOL)arg2;
- (void)addOwnerUIDMapper:(id)arg1 forTable:(id)arg2;
- (void)addKnownTable:(id)arg1;
- (id)ownerUIDMapperForTableUID:(const UUIDData_5fbc143e *)arg1;
- (void)addOwnerUIDMapper:(id)arg1 forTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)populateGSSPMultiTableRemapper:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

