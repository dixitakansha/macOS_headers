//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSUUID, TSKTransformationController, TSPDocumentRevision;

@interface TSKCollaborationDocumentSessionState : TSPObject
{
    TSPDocumentRevision *_mailboxRequestDocumentRevision;
    NSMutableArray *_sendPendingCommandQueue;
    NSMutableArray *_RSVPCommandQueue;
    BOOL _lastSendPendingCommandQueueItemWasMovedFromRSVPCommandQueue;
    NSUUID *_lastTooOldCommandIdentifier;
    NSMutableSet *_collaboratorIDs;
    NSMutableArray *_acknowledgedCommandsPendingResumeProcessDiffs;
    NSMutableArray *_skippedAcknowledgedCommandsPendingResumeProcessDiffs;
    NSMutableArray *_unprocessedCommandsPendingResumeProcessDiffs;
    NSMutableArray *_unprocessedCollaboratorCursorTransformerEntriesPendingResumeProcessDiffs;
    NSMutableDictionary *_acknowledgementObserversForCommandIdentifiers;
    NSMutableDictionary *_authors;
    TSPDocumentRevision *_lastCommandSendMarker;
    TSKTransformationController *_collaboratorCursorTransformationController;
    TSKTransformationController *_transformationControllerFromUnprocessedCommandOperations;
}

@property(readonly, nonatomic) TSKTransformationController *transformationControllerFromUnprocessedCommandOperations; // @synthesize transformationControllerFromUnprocessedCommandOperations=_transformationControllerFromUnprocessedCommandOperations;
@property(readonly, nonatomic) TSKTransformationController *collaboratorCursorTransformationController; // @synthesize collaboratorCursorTransformationController=_collaboratorCursorTransformationController;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)authorListExcludingAuthorList:(id)arg1;
@property(readonly, nonatomic) NSArray *authorList;
@property(readonly, nonatomic) NSDictionary *authors;
- (void)addAuthorList:(id)arg1;
- (void)removeAllAcknowledgementObserversForCommandIdentifier:(id)arg1;
- (void)addAcknowledgementObserver:(id)arg1 forCommandIdentifier:(id)arg2;
- (id)acknowledgementObserversForCommandIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *acknowledgementObserverCommandIdentifiers;
- (void)clearTransformationControllerFromUnprocessedCommandOperations;
- (void)addTransformationControllerFromUnprocessedCommandOperations:(id)arg1;
- (void)moveUnprocessedCollaboratorCursorOperationTransformersToTransformationController;
- (void)addUnprocessedCollaboratorCursorOperationTransformerPendingResumeProcessDiffs:(id)arg1 atSeq:(unsigned long long)arg2;
- (void)removeAllUnprocessedCommandsPendingResumeProcessDiffs;
- (void)addUnprocessedCommandPendingResumeProcessDiffs:(id)arg1;
@property(readonly, nonatomic) NSArray *unprocessedCommandsPendingResumeProcessDiffs;
- (void)removeAllSkippedAcknowledgedCommandsPendingResumeProcessDiffs;
- (void)addSkippedAcknowledgedCommandPendingResumeProcessDiffs:(id)arg1;
@property(readonly, nonatomic) NSArray *skippedAcknowledgedCommandsPendingResumeProcessDiffs;
- (void)removeAllAcknowledgedCommandsPendingResumeProcessDiffs;
- (void)addAcknowledgedCommandPendingResumeProcessDiffs:(id)arg1;
@property(readonly, nonatomic) NSArray *acknowledgedCommandsPendingResumeProcessDiffs;
- (void)addCollaboratorCursorOperationTransformer:(id)arg1 atSeq:(unsigned long long)arg2;
- (void)moveRSVPCommandQueueItemsToSendPendingQueue;
- (void)replaceOutgoingCommandQueueItemsWithCommandQueueItems:(id)arg1;
- (void)replaceLastSendPendingCommandQueueItemWithCommandQueueItem:(id)arg1;
@property(readonly, nonatomic) BOOL canReplaceLastSendPendingCommandQueueItem;
- (void)dequeueRSVPCommandQueueItem;
- (void)enqueueRSVPCommandQueueItem:(id)arg1;
@property(readonly, nonatomic) NSArray *RSVPCommandQueue;
- (id)dequeueSendPendingCommandQueueItem;
- (void)enqueueSendPendingCommandQueueItem:(id)arg1;
@property(readonly, nonatomic) NSArray *sendPendingCommandQueue;
- (void)addCollaboratorID:(id)arg1;
@property(readonly, nonatomic) NSSet *collaboratorIDs;
- (void)clear;
@property(copy, nonatomic) TSPDocumentRevision *lastCommandSendMarker;
@property(copy, nonatomic) NSUUID *lastTooOldCommandIdentifier;
@property(copy, nonatomic) TSPDocumentRevision *mailboxRequestDocumentRevision;
- (id)initWithContext:(id)arg1;

@end

