//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class BRCPrivateServerZone, BRCRelativePath, BRContainer, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateLocalContainer : BRCLocalContainer
{
    NSMutableArray *_syncBarriers;
    BOOL _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
- (void).cxx_destruct;
- (BOOL)printStatusLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(char *)arg4;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (BOOL)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)signalFaultingWatchers:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (BOOL)recomputeSyncBlockState;
- (void)scheduleContainerMetadataSyncUp;
- (void)updateWithPlist:(id)arg1;
- (id)plist;
- (void)resume;
- (void)setServerZone:(id)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5;
- (id)pathRelativeToRoot;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
@property(readonly, nonatomic) BRCPrivateServerZone *privateZone;
- (id)asPrivateContainer;
@property(readonly, nonatomic) BOOL isSharedContainer;
@property(readonly, nonatomic) BOOL isPrivateContainer;
- (void)_updateContainerMetadataFromRecord:(id)arg1;

@end

