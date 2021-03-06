//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsController.h"

@class RDVersion;

@interface IPXBurstController : IPXObjectsController
{
    RDVersion *_stackPick;
}

@property(readonly) RDVersion *stackPick; // @synthesize stackPick=_stackPick;
- (void).cxx_destruct;
- (id)changedItems;
- (id)newlyFavoritedItems;
- (id)allFavoritedItems;
- (id)burstItemForVersion:(id)arg1;
- (void)unpickVersions:(id)arg1;
- (void)pickVersions:(id)arg1;
- (void)_changeVersions:(id)arg1 withPickValue:(BOOL)arg2;
- (unsigned long long)countOfBurst;
- (id)initWithStackPick:(id)arg1;

@end

