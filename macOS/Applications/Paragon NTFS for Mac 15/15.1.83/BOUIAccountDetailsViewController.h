//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BOUIViewController.h"

@class NSImageView, NSString, NSTextField;

@interface BOUIAccountDetailsViewController : BOUIViewController
{
    NSString *_firstname;
    NSString *_lastname;
    NSString *_email;
    NSImageView *_logoImageView;
    NSTextField *_checkEmailTextField;
}

@property __weak NSTextField *checkEmailTextField; // @synthesize checkEmailTextField=_checkEmailTextField;
@property __weak NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(copy) NSString *email; // @synthesize email=_email;
@property(copy) NSString *lastname; // @synthesize lastname=_lastname;
@property(copy) NSString *firstname; // @synthesize firstname=_firstname;
- (void).cxx_destruct;
- (void)loadView;
- (id)nibName;

@end

