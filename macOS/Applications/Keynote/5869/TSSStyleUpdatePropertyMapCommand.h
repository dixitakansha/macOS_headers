//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class NSArray, NSMutableSet, NSSet, NSString, TSSPropertyMap, TSSStyle, TSSStylePropertyChangeSet;

@interface TSSStyleUpdatePropertyMapCommand : TSKCommand <GSSPAutoEncodable, TSDPropagatableCommand, TSDCommandInducedForPropagation>
{
    TSSStyle *_style;
    TSSStylePropertyChangeSet *_changeSet;
    TSSStyle *_newPropertyMapStyle;
    BOOL _notifyForStyleClients;
    TSSStyle *_oldPropertyMapStyle;
    TSSPropertyMap *_oldPropertyMap;
    TSSPropertyMap *_newPropertyMap;
    NSMutableSet *_objectsUsingStyle;
    TSSStylePropertyChangeSet *_inverseChangeSet;
}

@property(readonly, nonatomic) TSSStylePropertyChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(retain, nonatomic) TSSPropertyMap *oldPropertyMap; // @synthesize oldPropertyMap=_oldPropertyMap;
- (void).cxx_destruct;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_setPropertyMap:(id)arg1;
@property(readonly, nonatomic) NSSet *objectsUsingStyle;
- (BOOL)process;
@property(retain, nonatomic) TSSPropertyMap *newPropertyMap; // @synthesize newPropertyMap=_newPropertyMap;
@property(readonly, nonatomic) TSSStyle *style; // @synthesize style=_style;
- (id)actionString;
- (void)saveToArchive:(struct StyleUpdatePropertyMapCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct StyleUpdatePropertyMapCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)didInitFromSOS;
- (void)p_commonInitWithStyle:(id)arg1;
- (id)initWithContext:(id)arg1 style:(id)arg2 propertyMap:(id)arg3;
- (id)initWithContext:(id)arg1 style:(id)arg2 changeSet:(id)arg3;
@property(nonatomic) BOOL notifyForStyleClients;
- (void)populateGSSPCmdStyleUpdatePropertyMap:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
@property(readonly) Class superclass;

@end

