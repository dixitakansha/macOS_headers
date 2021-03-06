//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDragAndDropController.h"

#import "NSFilePresenter-Protocol.h"

@class NSArray, NSOperationQueue, NSSet, NSString, NSTimer, NSURL, TSUTemporaryDirectory;

@interface TMADragAndDropController : TSDDragAndDropController <NSFilePresenter>
{
    unsigned long long _filePromiseState;
    TSUTemporaryDirectory *_promisedFileDirectory;
    NSArray *_promisedFilePaths;
    NSArray *_promisedFileTypes;
    NSOperationQueue *_filePromisesOperationQueue;
    NSTimer *_promisedFileObservationTimer;
}

- (void).cxx_destruct;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)p_cleanupPromisedFileObservation;
- (void)p_finishImportingDragAndDropFilePromises;
- (void)p_cancelDragAndDropFilePromiseHandling;
- (id)p_promisedUTIsForPasteboard:(id)arg1;
- (void)cleanupEndOfDragOperation;
- (BOOL)insertDrawablesForDragInfo:(id)arg1 atPoint:(struct CGPoint)arg2 onRep:(id)arg3;
- (BOOL)performDragOperation:(id)arg1 atScaledPoint:(struct CGPoint)arg2;
- (BOOL)canCreateDrawablesFromDragInfo:(id)arg1;
- (id)nativeProvidersForDynamicDragInsertionWithDragInfo:(id)arg1;
- (BOOL)shouldCleanupAfterSuccessfulDragOperation;
- (id)p_collaborationDocumentSessionController;
- (id)p_modalOperationPresenter;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

