//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFDescriptionCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFCard, SFColor, SFImage, SFText;

@interface SFDescriptionCardSection : SFTitleCardSection <SFDescriptionCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int titleNoWrap:1;
        unsigned int descriptionExpand:1;
        unsigned int imageAlign:1;
        unsigned int textAlign:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _titleNoWrap;
    BOOL _descriptionExpand;
    int _separatorStyle;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    SFText *_descriptionText;
    NSString *_expandText;
    SFImage *_image;
    NSNumber *_titleWeight;
    NSNumber *_descriptionSize;
    NSNumber *_descriptionWeight;
    NSString *_attributionText;
    NSURL *_attributionURL;
    SFImage *_attributionGlyph;
    NSArray *_richDescriptions;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *richDescriptions; // @synthesize richDescriptions=_richDescriptions;
@property(retain, nonatomic) SFImage *attributionGlyph; // @synthesize attributionGlyph=_attributionGlyph;
@property(copy, nonatomic) NSURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property(nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(nonatomic) BOOL descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property(copy, nonatomic) NSNumber *descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property(copy, nonatomic) NSNumber *descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property(copy, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *expandText; // @synthesize expandText=_expandText;
@property(retain, nonatomic) SFText *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasTextAlign;
- (BOOL)hasImageAlign;
- (BOOL)hasDescriptionExpand;
- (BOOL)hasTitleNoWrap;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hideDivider;
@property(nonatomic) BOOL isCentered;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;

@end

