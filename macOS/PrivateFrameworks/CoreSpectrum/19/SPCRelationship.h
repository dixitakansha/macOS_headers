//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSMutableSet, NSSet, NSString;

@interface SPCRelationship : SPCObject
{
    NSString *_referencedClassName;
    NSString *_referencedIdentifier;
    NSMutableSet *_referencingObjectIdentifierStorage;
}

@property(retain, nonatomic) NSMutableSet *referencingObjectIdentifierStorage; // @synthesize referencingObjectIdentifierStorage=_referencingObjectIdentifierStorage;
@property(copy, nonatomic) NSString *referencedIdentifier; // @synthesize referencedIdentifier=_referencedIdentifier;
@property(copy, nonatomic) NSString *referencedClassName; // @synthesize referencedClassName=_referencedClassName;
@property(readonly, nonatomic) NSSet *referencingObjectIdentifiers;
- (void)removeReferencingObject:(id)arg1;
- (void)addReferencingObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

