#ifndef PROJECT_H
#define PROJECT_H

namespace Diagrama2 {
	namespace ProjectManagment {
		class Project {

		private:
			int name;
			int theResources;
			int theEmployees;
			int theWorkBreakdownStructure;

		public:
			void getName();

			void setName(int name);

			void getTheResources();

			void setTheResources(int theResources);

			void getTheEmployees();

			void setTheEmployees(int theEmployees);

			void getTheWorkBreakdownStructure();

			void setTheWorkBreakdownStructure(int theWordBreakdownStructure);
		};
	}
}

#endif
