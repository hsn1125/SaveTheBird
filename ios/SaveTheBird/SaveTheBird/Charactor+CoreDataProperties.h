//
//  Charactor+CoreDataProperties.h
//  SaveTheBird
//
//  Created by ATGS_Mac on 2016/05/19.
//  Copyright © 2016年 ATGS. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Charactor.h"

NS_ASSUME_NONNULL_BEGIN

@interface Charactor (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *image_stand;
@property (nullable, nonatomic, retain) NSNumber *no;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *detail;

@end

NS_ASSUME_NONNULL_END
