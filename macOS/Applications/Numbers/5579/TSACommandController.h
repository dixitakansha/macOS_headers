//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommandController.h"

@class TSADocumentRoot, TSDChangePropagationMap;

@interface TSACommandController : TSKCommandController
{
    TSADocumentRoot *_documentRoot;
    TSDChangePropagationMap *_changePropagationMap;
    BOOL _enclosingCommandsArePropagatable;
}

@property(readonly, nonatomic) TSDChangePropagationMap *changePropagationMapForMasterPropagation; // @synthesize changePropagationMapForMasterPropagation=_changePropagationMap;
@property(nonatomic) __weak TSADocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)protected_lastChanceWriteForCommittedCommand:(id)arg1;
- (void)protected_performIndirectCommand:(id)arg1 fromCommand:(id)arg2;
- (void)protected_willCommitCommands:(id)arg1;
- (void)p_propagateMasterChangesToSlidesForCommittedCommand:(id)arg1;
- (void)p_clearTableImportRecordForCommittedCommand:(id)arg1;
- (void)p_collectMasterChangesBeforeCommit:(id)arg1;
- (id)modelEnumeratorToVisitForPropagatingMasterChanges:(id)arg1;
- (id)changePropagationVisitorForPropagatingMasterChanges:(id)arg1;
- (BOOL)masterChangesShouldBePropagatedForObject:(id)arg1;
- (id)initWithContext:(id)arg1 commandDispatcher:(id)arg2 commandExecutor:(id)arg3 offlineCommandHandler:(id)arg4;

@end

