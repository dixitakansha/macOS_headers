//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLabelValuePair : NSObject <NSCopying>
{
    NSString *_label;
    id _value;
}

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, copy) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

