//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSCGSFence : NSObject <NSCoding, NSCopying>
{
    struct _mach_right_send _sendRight;
}

+ (BOOL)supportsSecureCoding;
+ (id)fence;
@property(readonly) struct _mach_right_send sendRight;
@property(readonly, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)set;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSendRight:(struct _mach_right_send)arg1;
- (id)init;

@end

