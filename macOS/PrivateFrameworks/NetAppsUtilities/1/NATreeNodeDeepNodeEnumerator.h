//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NATreeNode, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying>
{
    NSMutableArray *_enumeratorStack;
    NATreeNode *_node;
}

@property(readonly, copy, nonatomic) NATreeNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)nextObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(id)arg1;

@end

