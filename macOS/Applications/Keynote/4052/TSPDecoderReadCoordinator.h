//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPReadCoordinatorBase.h"

#import "TSPReadCoordinator-Protocol.h"

@class NSMapTable, NSObject, NSString, TSPComponent, TSPFinalizeHandlerQueue, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDecoder, TSPDecoderReadCoordinatorDelegate;

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator>
{
    id <TSPDecoder> _decoder;
    TSPObjectContext *_context;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    id <TSPDecoderReadCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dataQueue;
    TSPComponent *_rootObjectComponent;
    NSMapTable *_objects;
}

- (void).cxx_destruct;
- (BOOL)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (id)objectForIdentifier:(long long)arg1;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)canRetainObjectReferencedByWeakLazyReference;
- (long long)sourceType;
- (BOOL)hasDocumentVersionUUID;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;
- (id)context;
@property(readonly, nonatomic) BOOL isReadingFromDocument;
- (id)baseObjectUUID;
- (unsigned char)packageIdentifier;
- (unsigned long long)fileFormatVersion;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (BOOL)endReading;
- (BOOL)isExternalLazyReference:(id)arg1;
- (id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

