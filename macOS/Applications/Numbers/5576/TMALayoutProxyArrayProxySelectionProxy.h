//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TMALayoutProxyArrayProxy;

@interface TMALayoutProxyArrayProxySelectionProxy : NSObject
{
    TMALayoutProxyArrayProxy *_parent;
    NSString *_keyPath;
    NSMutableDictionary *_keyValueStorage;
}

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithParent:(id)arg1 keyPath:(id)arg2;

@end

